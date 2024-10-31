#include <iostream>

using namespace std;

int main() {
	short t; /*cin >> t; */t = 1;
	while(t--) {
		short n; cin >> n;
		int a[n][3], row[n] = {0};
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < 3; j++) {
				cin >> a[i][j];
				if(a[i][j]) row[i]++;
			}
		}
		int count = 0;
		for(auto i : row) if(i > 1) count++;
		cout << count;
	}

	return 0;
}