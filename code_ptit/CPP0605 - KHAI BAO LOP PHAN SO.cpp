// CPP0605 - KHAI BAO LOP PHAN SO.cpp
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
	ll tu, mau;
public:
	PhanSo(ll tu_ = 0, ll mau_ = 0) {
		ll tu = tu_, mau = mau_;
	}
	friend istream& operator>>(istream& input, PhanSo& ps) {
		input >> ps.tu >> ps.mau;
		return input;
	}
	friend ostream& operator<<(ostream& output, const PhanSo& ps) {
		output << ps.tu << "/" << ps.mau;
		return output;
	}
	void rutgon() {
		ll ucln = __gcd(this->tu, this->mau);
		this->tu /= ucln, this->mau /= ucln; 
	}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}