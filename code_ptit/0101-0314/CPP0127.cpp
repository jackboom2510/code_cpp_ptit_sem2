#include <iostream>
#include <math.h>

using namespace std;

int isSNT(long long n) {
	if(n == 2) return 1;
	else if(n == 1 || n%2 == 0) return 0;
	for(int i = 3; i <= sqrt(n); i+=2)
		if(n%i==0) return 0;
	return 1;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n, check = 0;
		cin >> n;
		for(int i = 2; i <= n/2; i++) {
			if(isSNT(i) && isSNT(n-i)) {
				cout << i << " " << n-i << endl;
				check = 1;
				break;
			}
		}
		if(check == 0) cout << "-1" << endl;
	}
	
	return 0;
}