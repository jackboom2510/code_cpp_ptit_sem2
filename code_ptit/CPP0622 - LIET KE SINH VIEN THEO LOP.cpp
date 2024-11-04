// CPP0622 - LIET KE SINH VIEN THEO LOP.cpp
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
#define gl(input, str) getline(input, str); while(str.size() == 0) getline(input, str);
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
	string msv, ht, lop, email;
public:
	SinhVien() { msv = ht = lop = email = " "; }
	string getLop() { return this->lop; }
	friend istream& operator>>(istream& input, SinhVien& sv) {
		input >> sv.msv;
		gl(input, sv.ht);
		input >> sv.lop >> sv.email;
		return input;
	}
	friend ostream& operator<<(ostream& output, const SinhVien& sv) {
		output << sv.msv << " " << sv.ht << " " << sv.lop << " " << sv.email;
		return output;
	}

} SV;

void solve()
{
	int N; cin >> N;
	SV ds[N];
	f(i, 0, N) cin >> ds[i];
	int Q; cin >> Q;
	f(i, 0, Q) {
		string lopCT; cin >> lopCT;
		cout << "DANH SACH SINH VIEN LOP " << lopCT << ":" << ln;
		for(auto it:ds) {
			if(it.getLop() == lopCT) cout << it << ln;
		}
	}
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