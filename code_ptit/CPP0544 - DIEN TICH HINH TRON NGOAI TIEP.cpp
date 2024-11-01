// CPP0544 - DIEN TICH HINH TRON NGOAI TIEP TAM GIAC.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long double ld;
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
#define PI 3.141592653589793238

typedef struct Point {
	ld x, y;
	void input() {
		cin >> x >> y;
	}
} P;

int check(P A, P B, P C) {
	return (A.x-B.x)*(A.y-C.y) != (A.x-C.x)*(A.y-B.y);
}

ld dis(P A, P B) {
	ld a = A.x, b = A.y, c = B.x, d = B.y;
	return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

void solve()
{
	P A, B, C;
	A.input(); B.input(); C.input();
	if(check(A, B, C)) {
		ld d1 = dis(A, B), d2 = dis(A, C), d3 = dis(B, C);
		ld s = (d1+d2+d3)/2;
		ld sqrtIn = s*(s-d1)*(s-d2)*(s-d3);
		ld r = d1*d2*d3/(4*sqrt(sqrtIn));
		ld res = PI*r*r;
		cout << fixed << setprecision(3) << res << ln;
	}
	else cout << "INVALID" << ln;
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