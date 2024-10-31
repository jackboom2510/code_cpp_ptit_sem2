#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	short t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for(auto& i : a) cin >> i;
		sort(a, a + n);
		cout << a[k-1] << endl;
	}

	return 0;
}