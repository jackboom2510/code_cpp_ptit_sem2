// CPP0371 - LOAI BO NGUYEN AM.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define f(i,s,e) for(int i = s; i < e; i++)
// #define rf(i,s,e) for(int i = s; i >= e; i--)
// #define ln "\n"
// #define INF 2e18
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second

const string VOW = "aeiouyAEIOUY";
bool isVow(char ch) {
	return VOW.find(ch) != string::npos;
}

void solve()
{
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(!isVow(s[i])) {
			cout << "." << (char)(tolower(s[i]));
		}
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