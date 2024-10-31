#include <iostream>
#include <math.h>

using namespace std;

int usnttk(long long n, int k) {
	long long N = n;
	int c = 0;
	for(int i = 2; i <= sqrt(N); i++) {
		while(n%i == 0) {
			n/=i;
			c++;
			if(c == k) return i;
		}
	}
	if(n > 1) {
		c++;
		if(c == k) return n;
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n; int k;
		cin >> n >> k;
		cout << usnttk(n, k) << endl;
	}
	
	return 0;
}