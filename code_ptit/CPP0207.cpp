#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		// Main Function
		int b[n];
		for(int i = 0; i < n - k; i++)
			b[i] = a[i+k];
		for(int i = n-k; i < n; i++)
			b[i] = a[i-n+k];
		for(int i = 0; i < n; i++)
			cout << b[i] << " ";
		cout << endl;
	}

	return 0;
}