#include <iostream>
#include <math.h>

using namespace std;

long long msQG(long long n) {
	long long last = 0, c = 0;
	while(n%1000!=84) {
		last += n%10*pow(10, c++);
		n/=10;
	}
	return n/1000*pow(10,c) + last;
}

int main() {
	int t;
	cin >> t
;	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		cout << msQG(n) << endl;
	}

	return 0;
}