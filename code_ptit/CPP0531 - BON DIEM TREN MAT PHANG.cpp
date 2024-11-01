// CPP0531 - BON DIEM TREN MAT PHANG.cpp
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
	int x, y, z;
	friend istream& operator>>(istream& input, Point& P) {
		input >> P.x >> P.y >> P.z;
		return input;
	}
} P;

typedef struct vPoint {
	int x, y, z;
	vPoint() {
		x = 0; y = 0; z = 0;
	}
	vPoint(const Point& A, const Point& B) {
		x = B.x - A.x;
		y = B.y - A.y;
		z = B.z - A.z;
	}
	friend ostream& operator<<(ostream& output, const vPoint& VP) {
		output << "(" << VP.x << "," << VP.y << "," << VP.z << ")";
		return output;
	}
} vP;

int det(int a, int b, int c, int d) {
	return a*d-b*c;
}

vPoint cross(const vPoint& A, const vPoint& B) {
	vP res;
	res.x = det(A.y, A.z, B.y, B.z);
	res.y = det(A.z, A.x, B.z, B.x);
	res.z = det(A.x, A.y, B.x, B.y);
	return res;
}

int dot(const vPoint& A, const vPoint& B) {
	return A.x*B.x + A.y*B.y + A.z*B.z;
}

void solve()
{
	P A, B, C, D;
	cin >> A >> B >> C >> D;
	// vP AB, AC, AD;
	// AB.input(A, B); AC.input(A, C); AD.input(A, D);
	vP AB(A, B), AC(A, C), AD(A, D);
	vP crossVP = cross(AB, AC);
	int res = dot(crossVP, AD);
	// cout << "AB" << AB << ln << "AC" << AC << ln;
	// cout << "[AB,AC] = " << crossVP << ln << "AD" << AD << ln;
	// cout << "[AB,AC].AD = " << res << ln;
	if(res == 0) cout << "YES" << ln;
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