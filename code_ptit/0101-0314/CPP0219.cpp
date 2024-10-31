#include <iostream>

using namespace std;

int main() {
	short t; cin >> t;
	while(t--) {
		short n, m; cin >> n >> m;
		int a[n][m];
		int row[n] = {0}, col[m] = {0};
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> a[i][j];
				if(a[i][j]) {
					row[i] = 1; col[j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(!row[i] && !col[j]) cout << "0 ";
				else cout << "1 ";
			}
			cout << endl;
		}
	}

	return 0;
}