#include <iostream>
#include <math.h>

using namespace std;

int isSNT(long long n) {
	if(n <= 1) return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n%i == 0) return 0;
	}
	return 1;
}

long long tcs(long long n) {
	long long s = 0;
	while(n != 0) {
		s += n%10;
		n/=10;
	}
	return s;
}

long long tus(long long n) {
	long long s = 0;
	float can = sqrt(n)
	for(int i = 2; i <= can; i++) {
		if(n%i==0) {
			while(n%i==0) {
				s+=i;
				n/=i;
			}
		}
	}
	return s;
}

int isSTH(long long n) {
	if(!isSNT(n)) return 0;
	return tus(n) == tcs(n);
}

int main() {
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		if(isSTH(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}

	return 0;
}