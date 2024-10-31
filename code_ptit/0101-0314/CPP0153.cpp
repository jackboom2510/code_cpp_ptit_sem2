#include <iostream>
using namespace std;

long long chiaDu(int n, long long k) {
	long long range = k*(k-1)/2, s = 0;
	for(int i = 1; i <= n%k; i++)
		s += i;
	return n/k*range + s;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; long long k;
		cin >> n >> k;
		cout << chiaDu(n, k) << endl;
	}

	return 0;
}