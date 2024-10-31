#include <iostream>
using namespace std;

long long sumCSC(long long a) {
	return a + a*(a-1)/2;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long a;
		cin >> a;
		cout << sumCSC(a) << endl;
	}
	return 0;
}