// CPP0502.cpp - CẤU TRÚC THÍ SINH
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ThiSinh{
	string name, date;
	float a, b, c, s;
};

void nhap(struct ThiSinh& x) {
	getline(cin, x.name);
	cin >> x.date >> x.a >> x.b >> x.c;
	x.s = x.a + x.b + x.c;
}

void in(struct ThiSinh x) {
	cout << x.name << " " << x.date << " " << fixed << setprecision(1) << x.s << endl;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}