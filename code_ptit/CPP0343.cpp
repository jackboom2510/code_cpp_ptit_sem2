// CPP0343.cpp - DÃY ƯU THẾ
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

typedef vector<int>::iterator vit;
#define ln "\n"
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
	string line, word;
	getline(cin, line);
	while(line.size() == 0)
		getline(cin, line);
	stringstream ss(line);
	vector<int> v;
	while(ss >> word) {
		v.push_back(stoi(word));
	}
	int n = v.size(), c = 0, l = 0;
	for(int i = 0; i < n; i++) {
		if(v[i]%2==0) c++;
		else l++;
	}
	if(n%2==0 && c > l) cout << "YES" << ln;
	else if(n%2!=0 && l > c) cout << "YES" << ln;
	else cout << "NO" << ln;
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