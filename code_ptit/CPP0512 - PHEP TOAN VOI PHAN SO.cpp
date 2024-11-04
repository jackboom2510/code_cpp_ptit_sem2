// CPP0512 - PHEP TOAN VOI PHAN SO.cpp
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

typedef struct PhanSo {
	ll tu, mau;
	PhanSo(ll tu_ = 0, ll mau_ = 0) {
		tu = tu_; mau = mau_;
	}
	void stdlize() {
		ll ucln = __gcd(this->mau, this->tu);
		this->mau /= ucln;
		this->tu /= ucln;
		if(this->mau < 0) {
			this->mau *= -1;
			this->tu *= -1;
		}
	}
	PhanSo operator +(const PhanSo& ps) {
		PhanSo res;
		res.mau = this->mau*ps.mau;
		res.tu = this->tu*ps.mau + ps.tu*this->mau;
		res.stdlize();
		return res;
	}
	PhanSo operator *(const PhanSo& ps) {
		PhanSo res;
		res.mau = this->mau*ps.mau;
		res.tu = this->tu*ps.tu;
		res.stdlize();
		return res;
	}
	friend ostream& operator<<(ostream& output, const PhanSo& ps) {
		output << ps.tu << "/" << ps.mau;
		return output;
	}
} PS;

void process(PS a, PS b) {
	PS c = (a+b)*(a+b);
	c.stdlize();
	PS d = a*b*c;
	d.stdlize();
	cout << c << " " << d << ln;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}