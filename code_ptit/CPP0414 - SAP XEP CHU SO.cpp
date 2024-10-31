// CPP0414 - SAP XEP CHU SO.cpp
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

void input(set<int> &a, int n) {
	while(n != 0) {
		a.insert(n%10);
		n/=10;
	}
}

void solve()
{
	int n; cin >> n;
	int x;
	set<int> a;
	f(i,0,n) {
		cin >> x;
		input(a, x);
	}
	for(auto i:a) cout << i << " ";
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