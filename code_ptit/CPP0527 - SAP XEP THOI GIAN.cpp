// CPP0527 - SAP XEP THOI GIAN.cpp
// CPP0526 - TRE NHAT – GIA NHAT.cpp
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

struct Time {
	int s, m, h;
};

bool cmp(const Time& a, const Time& b) {
	if(a.h != b.h) return a.h < b.h;
	else if(a.m != b.m) return a.m < b.m;
	return a.s < b.s;
}

void nhap(Time& t) {
	cin >> t.h >> t.m >> t.s;
}

void xuat(Time t) {
	cout << t.h << " " << t.m << " " << t.s << ln;
}

void solve()
{
	int n; cin >> n;
	Time DS[n];
	f(i, 0, n) nhap(DS[i]);
	sort(DS, DS+n, cmp);
	f(i, 0, n) xuat(DS[i]);
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