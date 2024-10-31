#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, q; cin >> n >> q;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < q; i++) {
			int l, r, s = 0;
			cin >> l >> r;
			l--; r--;
			for(int j = l; j <= r; j++)
				s += arr[j];
			cout << s << endl;
		}
	}

	return 0;
}