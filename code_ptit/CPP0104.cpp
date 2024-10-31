#include <iostream>
#include <iomanip>
using namespace std;

long long giaithua(long long a) {
	long long gt = 1;
	for(int i = a; i >= 2; i--)
		gt *= i;
	return gt;
}

long long tongGT(long long a) {
	long long s = 0;
	for(int i = 1; i <= a; i++) {
		s += giaithua(i);
	}
	return s;
}

int main() {
	int a;
	cin >> a;
	cout << tongGT(a);
	return 0;
}