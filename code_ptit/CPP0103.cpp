#include <iostream>
#include <iomanip>
using namespace std;

double tongPT(int a) {
	double s = 0;
	for(int i = 1; i <= a; i++) {
		s += (double)1/i;
	}
	return s;
}
int main() {
	int a;
	cin >> a;
	cout << fixed << setprecision(4) << tongPT(a);
	return 0;
}