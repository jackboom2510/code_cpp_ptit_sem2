// CPP0532 - DIEN TICH DA GIAC.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef long double ld;
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

typedef struct Point {
	ld x, y;
	Point() {
		x = 0, y = 0;
	}
	Point(ld x_, ld y_) {
		x = x_, y = y_;
	}
	friend istream& operator>>(istream& input, Point& p) {
		input >> p.x >> p.y;
		return input;
	}
	friend ld distance(Point A, Point B) {
		ld a = A.x - B.x, b = A.y - B.y;
		return sqrt(a*a + b*b);
	}
} P;

typedef struct Triangle {
	P x, y, z;
	ld a, b, c, S;
	Triangle() {
		x, y, z;
	}
	Triangle(P x_, P y_, P z_) {
		x = x_, y = y_, z = z_;
		a = distance(y_, z_), b = distance(x_, z_), c = distance(x_, y_);
		ld h = (a+b+c)/2;
		S = sqrt(h*(h-a)*(h-b)*(h-c));
	}
} Tri;

void solve()
{
	int n; cin >> n;
	P diem[n];
	Tri tg[n-2];
	cin >> diem[0] >> diem[1];
	f(i, 2, n) {
		cin >> diem[i];
		Tri tmp(diem[0], diem[i-1], diem[i]);
		tg[i-2] = tmp;
	}
	ld sum = 0;
	f(i, 0, n-2) sum += tg[i].S;
	cout << fixed << setprecision(3) << sum << ln;
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