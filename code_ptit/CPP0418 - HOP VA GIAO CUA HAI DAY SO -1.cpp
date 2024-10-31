// CPP0418 - HOP VA GIAO CUA HAI DAY SO -1
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
#define all(x) (x).begin(), (x).end()

void solve()
{
	int n, m; cin >> n >> m;
	int a[n], b[m];
	vector<int> uni, inter;
	f(i, 0, n) {
		cin >> a[i];
		uni.pb(a[i]);
	}
	f(i, 0, m) {
		int mark = 1;
		cin >> b[i];
		f(j, 0, n) {
			if(b[i] == a[j]) {
				inter.pb(b[i]);
				mark = 0;
				break;
			}
		}
		if(mark) uni.pb(b[i]);
	}
	sort(all(uni)); sort(all(inter));
	for(auto it:uni) cout << it << " ";
	cout << ln;
	for(auto it:inter) cout << it << " ";
	cout << ln;
}

void solve2() {
	int n, m; cin >> n >> m;
	int x;
	map<int, int> mp;
	f(i, 0, n+m) {
		cin >> x;
		mp[x]++;
	}
	for(auto it:mp)
		if(it.se >= 1) cout << it.fi << " ";
	cout << ln;
	for(auto it:mp)
		if(it.se == 2) cout << it.fi << " ";
	cout << ln;
}

int main()
{
	fast_cin();
	int t;
	cin >> t;
	for(int it=1; it<=t; it++) {
		solve2();
	}
	return 0;
}