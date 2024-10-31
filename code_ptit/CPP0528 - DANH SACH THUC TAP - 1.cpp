// CPP0528 - DANH SACH THUC TAP - 1.cpp
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
	string msv, ten, lop, email, m;
} SV;

int id = 1;
void nhap(SV& sv) {
	sv.stt = id++;
	getline(cin, sv.msv);
	getline(cin, sv.ten);
	getline(cin, sv.lop);
	getline(cin, sv.email);
	getline(cin, sv.m);
}

bool cmp(const SV& a, const SV& b) {
	return a.ten < b.ten;
}

void xuat(SV sv) {
	cout << sv.stt << " " << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.email << " " << sv.m << ln;
}

void solve()
{
	int N; cin >> N;
	cin.ignore();
	SV DS[N];
	f(i, 0, N) nhap(DS[i]);
	int M; cin >> M;
	f(i, 0, M) {
		string E; cin >> E;
		vector<SV> vSV;
		f(j, 0, N) {
			if(DS[j].m == E)
				vSV.pb(DS[j]);
		}
		sort(all(vSV), cmp);
		for(auto it:vSV) xuat(it);
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