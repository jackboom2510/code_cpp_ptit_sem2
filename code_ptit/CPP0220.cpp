#include <iostream>

using namespace std;

int main() {
	short t; cin >> t;
	while(t--) {
		short n; cin >> n;
		short a[n][n];
		for(auto& i:a) for(auto& j:i) cin >> j;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(!i || !j || i == n-1 || j == n-1) cout << a[i][j] << " ";
				else cout << "  ";
			}
			cout << endl;
		}
	}

	return 0;
}