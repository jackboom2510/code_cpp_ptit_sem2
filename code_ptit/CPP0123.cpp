#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int isSNT(long long n) {
	if(n == 2) return 1;
	else if(n%2==0) return 0;
	for(int i = 3; i <= sqrt(n); i+=2)
		if(n%i == 0) return 0;
	return 1;
}

int main() {
	int t = 1;
	// cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		if(isSNT(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}