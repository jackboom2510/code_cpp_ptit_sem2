// CPP0610 - TINH TONG HAI DOI TUONG PHAN SO.cpp
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

class PhanSo {
private:
	ll t, m;
public:
	PhanSo(ll t_ = 0, ll m_ = 0) {
		t = t_, m = m_;
	}
	friend istream& operator>>(istream& input, PhanSo& ps) {
		input >> ps.t >> ps.m;
		return input;
	}
	friend ostream& operator<<(ostream& output, const PhanSo& ps) {
		output << ps.t << "/" << ps.m;
		return output;
	}
	void stdlize() {
		ll ucln = __gcd(this->t, this->m);
		this->t /= ucln, this->m /= ucln;
	}
	PhanSo operator+(const PhanSo& b) {
		PhanSo res;
		res.m = this->m*b.m;
		res.t = this->t*b.m + b.t*this->m;
		res.stdlize();
		return res;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}