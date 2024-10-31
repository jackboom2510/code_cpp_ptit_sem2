// CPP0416 - DCPTCOTBK.cpp
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
#define mp make_pair
#define pb push_back
#define fi first
#define se second

void solve()
{
	int n, k; cin >> n >> k;
	int a[n];
	f(i, 0, n) cin >> a[i];
	int count = 0;
	map<int, int> mp;
	f(i, 0, n) {
		for(auto it:mp) {
			if(a[i] + it.fi == k) 
				count += it.se;
		}
		mp[a[i]]++;
	}
	cout << count << ln;
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