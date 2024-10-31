#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		if(n%100 == 86) cout << "1" << endl;
		else cout << "0" << endl;
	}
	
	return 0;
}