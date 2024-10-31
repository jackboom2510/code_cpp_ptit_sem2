#include <iostream>
#include <math.h>

using namespace std;

long long USNTLN(long long n) {
	long long tmp = n, max = 1;
	for(int i = 2; i <= sqrt(tmp); i++) {
		if(n%i == 0) {
			if(i > max) max = i;
			while(n%i==0) n/=i;
		}
	}
	if(n > 1) max = n;
	return max;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		cout << USNTLN(n) << endl;
	}
	
	return 0;
}
