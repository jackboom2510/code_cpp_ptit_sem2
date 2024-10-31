#include <iostream>
#include <iomanip>
using namespace std;

int isSLP(long long a) {
	while(a != 0) {
		int kt = a%10;
		if(kt != 0 && kt != 6 && kt != 8)
			return 0;
		a /= 10;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long a;
		cin >> a;
		if(isSLP(a)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}