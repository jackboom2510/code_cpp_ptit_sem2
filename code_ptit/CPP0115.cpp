#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void ptTSNT(long long n) {
	int c = 0;
	while(n%2==0) {
		n /= 2;
		c++;
	}
	if(c != 0) cout << "2 " << c << " ";
	for(int i = 3; n != 1; i+=2) {
		c = 0;
		while(n%i==0) {
			n /= i;
			c++;
		}
		if(c != 0) cout << i << " " << c << " ";
	}
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		ptTSNT(n);
		cout << endl;
	}
	
	return 0;
}