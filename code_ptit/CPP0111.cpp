#include <iostream>
#include <math.h>

using namespace std;

int isSLK(long long n) {
	while(n > 10) {
		if(abs(n%10 - n/10%10) != 1) return 0;
		n /= 10;
	}
	return 1;
}

int main() {
	int t;
	cin >> t
;	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		if(isSLK(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}