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

int det(int a, int b, int c, int d) {
	return a*d-b*c;
}
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
	vPoint cross(const vPoint& v) {
		vPoint res;
		res.x = det(this->y, this->z, v.y, v.z);
		res.y = det(this->z, this->x, v.z, v.x);
		res.z = det(this->x, this->y, v.x, v.y);
		return res;
	}
	int dot(const vPoint& v) {
		return this->x*v.x + this->y*v.y + this->z*v.z;
	}	
} vP;

void solve()
{
	P A, B, C, D;
	cin >> A >> B >> C >> D;
	vP AB(A, B), AC(A, C), AD(A, D);
	if((AB.cross(AC)).dot(AD) == 0) cout << "YES" << ln;
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