// CPP0430 - BO SUNG PHAN TU.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

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


void solve()
{
	int n; cin >> n;
	set<int> s; int x;
	f(i, 0, n) {
		cin >> x;
		s.insert(x);
	}
	auto it = s.begin();
	for(int i = 0; i < s.size()-1; i++) it++;
	int res = *it - *s.begin() + 1 - s.size();
	cout << res << ln;
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