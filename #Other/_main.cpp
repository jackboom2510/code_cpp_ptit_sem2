// CPP0620 - SAP XEP SINH VIEN THEO LOP.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef long double ld;
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

typedef class SinhVien {
private:
	string msv, ht, l, email;
public:
	SinhVien() {
		msv = ht = l = email = "";
	}
	friend istream& operator>>(istream& input, SinhVien& sv) {
		input >> sv.msv;
		getline(input, sv.ht);
		while(sv.ht.size() == 0) getline(input, sv.ht);
		input >> sv.l >> sv.email;
		return input;
	}
	friend ostream& operator<<(ostream& output, const SinhVien& sv) {
		output << sv.msv << " " << sv.ht << " " << sv.l << " " << sv.email;
		return output;
	}
	friend bool operator<(const SinhVien& a, const SinhVien& b) {
		if(a.l != b.l) return a.l < b.l;
		return a.msv < b.msv;
	}
} SV;

void solve()
{
	int N; cin >> N;
	SV ds[N];
	f(i, 0, N) cin >> ds[i];
	sort(ds, ds+N);
	f(i, 0, N) cout << ds[i] << ln;
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