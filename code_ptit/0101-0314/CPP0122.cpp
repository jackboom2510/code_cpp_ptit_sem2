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

long long ggcd(int n) {
	long long s = 1;
	for(int i = 2; i <= n; i++) {
		s = gcd(s,i);
	}
	return s;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << ggcd(n) << endl;
	}
	
	return 0;
}