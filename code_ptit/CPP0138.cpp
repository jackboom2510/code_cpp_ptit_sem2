#include <iostream>
#include <math.h>
using namespace std;

int isSNT(long long n) {
	if(n == 2) return 1;
	else if(n < 2 || n%2==0) return 0;
	for(int i = 3; i <= sqrt(n); i+=2)
		if(n%i == 0) return 0;
	return 1;
}

void CSNT(int n) {
	for(int i = 2; i <= n/2; i++) {
		if(isSNT(i) && isSNT(n-i)) {
			cout << i << " " << n-i;
			break;
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;
		CSNT(n);
	}

	return 0;
}