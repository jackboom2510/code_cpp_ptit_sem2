// CPP0421 - SAP DAT DAY SO.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

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

void solve()
{
	long long n; cin >> n;
	map<long long, int> m;
	long long x;
	f(i, 0, n) {
		cin >> x;
		m[x]++;
	}
	f(i, 0, n) {
		if(m.find(i) == m.end()) cout << "-1 ";
		else cout << i << " ";
	}
	cout << ln;
}

int main()
{
	fast_cin();
	int t;
	cin >> t;
	for(int it=1; it<=t; it++) {
		solve();
	}
	return 0;
}