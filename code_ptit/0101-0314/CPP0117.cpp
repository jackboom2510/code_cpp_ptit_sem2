#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long long srg(long long n) {
	long long s = 0;
	while(n != 0) {
		s += n%10;
		n/=10;
	}
	return s;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		while(n > 9) {
			n = srg(n);
		}
		cout << n << endl;
	}
	
	return 0;
}