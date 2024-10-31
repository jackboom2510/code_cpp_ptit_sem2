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

struct Date {
	string day, month, year;
	int d, m, y;
};

typedef struct Person {
	string ten, date;
	Date n;
} PS;

void DATE(PS& ps) {
	stringstream ss(ps.date);
	getline(ss, ps.n.day, '/');
	getline(ss, ps.n.month, '/');
	getline(ss, ps.n.year);
	ps.n.d = stoi(ps.n.day);
	ps.n.m = stoi(ps.n.month);
	ps.n.y = stoi(ps.n.year);
}

bool cmp(const PS& a, const PS& b) {
	if(a.n.y != b.n.y) return a.n.y < b.n.y;
	else if(a.n.m != b.n.m) return a.n.m < b.n.m;
	return a.n.d < b.n.d;
}

void nhap(PS& ps) {
	cin >> ps.ten >> ps.date;
	DATE(ps);
}

void solve()
{
	int n; cin >> n;
	PS DS[n];
	f(i, 0, n) nhap(DS[i]);
	sort(DS, DS+n, cmp);
	cout << DS[n-1].ten << ln << DS[0].ten << ln;
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