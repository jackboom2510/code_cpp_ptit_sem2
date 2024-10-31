#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long long lcm(long long a, long long b) {
	if(b == 0) return a;
	return lcm(b, a%b);
}

long long gcd(long long a, long long b) {
	return (a*b)/lcm(a, b);
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long a, b;
		cin >> a >> b;
		cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
	
	return 0;
}