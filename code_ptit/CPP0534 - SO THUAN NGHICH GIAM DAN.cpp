// CPP0534 - SO THUAN NGHICH GIAM DAN.cpp
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

int isSTN(string n) {
	int sz = n.size(), hsz = sz/2;
	if(sz == 1) return 0;
	f(i, 0, hsz)
		if(n[i] != n[sz-1-i]) return 0;
	return 1;
}

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	int n = a.fi.size(), m = b.fi.size();
	if(n != m) return n > m;
	f(i, 0, a.fi.size()) {
		n = a.fi[i], m = b.fi[i];
		if(n != m) return n > m;
	}
}

int main()
{
	fast_cin();
	map<string, int> ds;
	string num;
	while(cin >> num) {
		if(isSTN(num)) ds[num]++;
	}
	vector<pair<string,int>> v;
	for(auto it:ds) v.pb(it);
	sort(all(v), cmp);
	for(auto it:v) cout << it.fi << " " << it.se << ln;
	return 0;
}