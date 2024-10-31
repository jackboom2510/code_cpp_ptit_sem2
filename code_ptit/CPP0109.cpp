#include <iostream>
#include <math.h>

using namespace std;

/*
long long firstSCB(int n) {
	long long hs = 0;
	for(int i = 0; i < n/2-1; i++) {
		hs = hs*10 + 1;
	}
	return pow(10, n-1) + hs;
}

long long lastSCB(int n) {
	long long ret = 0;
	for(int i = 0; i < n/2; i++) ret = ret*10 + 9;
	for(int i = 0; i < n/2; i++) ret = ret*10 + 8;
	return ret;
}

int main() {
	int n, c = 0;
	cin >> n;
	int fstep = (n==2?3:1), sstep = (n==2?1:3);
	for(long long i = firstSCB(n); i <= lastSCB(n);) {
		cout << i << " ";
		c++;
		if(c%10 == 0) i+=sstep;
		else if(c%5 == 0) i+=fstep;
		else i+=2;
		if(c == 10) {
			c = 0;
			cout << endl;
		}
		if(c%10 == 0) cout << endl;
	}

	return 0;
}
*/

int isSCB(long long n) {
	int c = 0, l = 0;
	while(n != 0) {
		if(n%10%2==0) c++;
		else l++;
		n/=10;
	}
	return c==l;
}

int main() {
	int n, c = 0;
	cin >> n;
	for(long long i = pow(10, n-1); i <= pow(10, n)-1; i++) {
		if(isSCB(i)) {
			cout << i << " ";
			c++;
		}
		if(c%10 == 0) {
			c = 0;
			cout << endl;
		}
	}
}