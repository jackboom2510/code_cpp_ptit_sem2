#include <iostream>
#include <iomanip>
using namespace std;

int isSTN(long long a) {
	long long tmp = a, stn = 0;
	while(a != 0) {
		stn = stn*10 + a%10;
		a/=10;
	}
	// cout << stn << endl;
	return stn == tmp;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long a;
		cin >> a;
		if(isSTN(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}