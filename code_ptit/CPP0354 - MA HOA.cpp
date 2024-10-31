// CPP0354 - MÃ HÓA
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// typedef vector<pair<char, int>>::iterator itvp;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define f(i,s,e) for(int i = s; i < e; i++)
#define ln "\n"
#define INF 2e18
#define pb push_back
#define mp make_pair
#define fi first
#define se second

void solve()
{
	string str;
	cin >> str;
	int n = str.size();
	vector<pair<char, int>> v;
	for(int i = 0; i < n; i++) {
		v.pb(mp(str[i], 1));
		auto it = v.end()-1;
		while(str[i+1] == str[i] && i < n) {
			it->se++;
			i++;
		}
	}
	for(auto it:v) {
		cout << it.fi << it.se;
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