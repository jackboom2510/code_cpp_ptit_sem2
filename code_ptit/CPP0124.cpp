#include <iostream>
#include <math.h>

using namespace std;

void ptTSNT(long long n) {
	long long tmp = n;
	int c = 0;
	for(int i = 2; i <= sqrt(tmp); i++) {
		while(n%i==0) {
			n/=i;
			c++;
		}
		if(c!=0) {
			cout << i << " " << c << endl;
			c = 0;
		}
	}
	if(n > 1) cout << n << " 1" << endl;
}

int main() {
	int t = 1;
	// cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		ptTSNT(n);
	}
	
	return 0;
}