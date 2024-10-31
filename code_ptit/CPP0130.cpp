#include <iostream>
#include <math.h>

using namespace std;

void ptTSNT(long long n) {
	long long tmp = n;
	for(int i = 2; i <= sqrt(tmp); i++) {
		while(n%i==0) {
			n/=i;
			cout << i << " ";
		}
	}
	if(n > 1) cout << n;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		ptTSNT(n);
	}
	
	return 0;
}