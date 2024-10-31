#include <iostream>
#include <math.h>

using namespace std;

int isSNT(long long n) {
	if(n == 2) return 1;
	else if(n%2 == 0) return 0;
	for(int i = 3; i <= sqrt(n); i+=2)
		if(n%i==0) return 0;
	return 1;
}

int main() {
	int t = 1;
	// cin >> t;
	for(int i = 0; i < t; i++) {
		long long a, b;
		cin >> a >> b;
		if(a > b) {
			long long tmp = a;
			a = b;
			b = tmp;
		}
		for(long long j = a+1; j < b; j++)
			if(isSNT(j)) cout << j << " ";
	}
	
	return 0;
}