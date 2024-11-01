// CPP0529 - DANH SACH THUC TAP - 2.cpp
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

typedef struct SinhVien {
	int stt;
	string msv, ht, lop, email, dn;
} SV;

typedef struct DoanhNghiep {
	string dn;
	vector<SV> tt;
} DN;

vector<DN> dsdn;

int id = 1;
void nhap(SV& sv) {
	sv.stt = id++;
	getline(cin, sv.msv);
	getline(cin, sv.ht);
	getline(cin, sv.lop);
	getline(cin, sv.email);
	getline(cin, sv.dn);
	int mark = 1;
	for(auto& it:dsdn) {
		if(it.dn == sv.dn) {
			mark = 0;
			it.tt.pb(sv);
			break;
		}
	}
	if(mark) {
		DN tmp;
		tmp.dn = sv.dn;
		tmp.tt.pb(sv);
		dsdn.pb(tmp);
	}
}

bool cmp(const SV& a, const SV& b) {
	return a.msv < b.msv;
}

void xuat(SV sv) {
	cout << sv.stt << " " << sv.msv << " " << sv.ht << " " << sv.lop << " " << sv.email << " " << sv.dn << ln;
}

void solve()
{
	int n; cin >> n;
	cin.ignore();
	SV dssv[n];
	f(i, 0, n) nhap(dssv[i]);
	int t; cin >> t;
	f(i, 0, t) {
		string tenDN; cin >> tenDN;
		auto it = find_if(all(dsdn), [tenDN](const DN& x){return x.dn == tenDN;});
		sort(all((*it).tt), cmp);
		for(auto sv:(*it).tt) xuat(sv);
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