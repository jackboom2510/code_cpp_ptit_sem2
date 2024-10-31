// CPP0516 - SAP XEP DANH SACH MAT HANG.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<int,int> p32;
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define f(i,s,e) for(int i = s; i < e; i++)
#define rf(i,s,e) for(int i = s; i >= e; i--)
#define ln "\n"
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef struct HangHoa {
	int ma;
	string ten, nhom;
	long double giamua, giaban, loinhuan;
} HH;

int id = 1;
void nhapHang(HH& h) {
	h.ma = id++;
	getline(cin, h.ten);
	while(h.ten.size() == 0)
		getline(cin, h.ten);
	getline(cin, h.nhom);
	while(h.nhom.size() == 0)
		getline(cin, h.nhom);
	cin >> h.giamua >> h.giaban;
	h.loinhuan = h.giaban - h.giamua;
}

void xuatHang(HH h) {
	cout << h.ma << " " << h.ten << " " << h.nhom << " " << fixed << setprecision(2) << h.loinhuan << ln;
}

bool cmp(const HH& a, const HH& b) {
	return a.loinhuan > b.loinhuan;
}

void solve()
{
	int n; cin >> n;
	HH H[n];
	f(i, 0, n)
		nhapHang(H[i]);
	sort(H, H+n, cmp);
	f(i, 0, n)
		xuatHang(H[i]);
}

int main()
{
	fast_cin();
	int t = 1;
	// cin >> t;
	for(int it=1; it<=t; it++) {
		solve();
	}
	return 0;
}