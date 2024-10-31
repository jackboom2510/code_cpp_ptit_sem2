// CPP0507.cpp - TÍNH TỔNG HAI PHÂN SỐ
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

struct PhanSo{
	long long tu, mau;
};

long long gcd(long long a, long long b) {
	if(b == 0) return a;
	return gcd(b, a%b);
}

long long lcm(long long a, long long b) {
	return a*b/gcd(a, b);
}

void nhap(struct PhanSo& x) {
	cin >> x.tu >> x.mau;
}

void rutgon(struct PhanSo& x) {
	long long ucln = gcd(x.tu, x.mau);
	x.tu /= ucln; x.mau /= ucln;
}

struct PhanSo tong(struct PhanSo a, struct PhanSo b) {
	struct PhanSo res;
	res.tu = a.tu*b.mau + a.mau*b.tu;
	res.mau = a.mau*b.mau;
	rutgon(res);
	return res;
}

void in(struct PhanSo x) {
	cout << x.tu << "/" << x.mau << endl;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}