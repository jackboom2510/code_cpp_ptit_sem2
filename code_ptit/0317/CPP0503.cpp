// CPP0503.cpp - CẤU TRÚC PHÂN SỐ
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

void nhap(struct PhanSo& x) {
	cin >> x.tu >> x.mau;
}

void rutgon(struct PhanSo& x) {
	long long ucln = gcd(x.tu, x.mau);
	x.tu /= ucln; x.mau /= ucln;
}

void in(struct PhanSo x) {
	cout << x.tu << "/" << x.mau << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}