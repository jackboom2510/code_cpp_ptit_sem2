// 	CPP0227	IN MA TRẬN - 1
#include <iostream>

using namespace std;

int main() {
	short t; cin >> t;
	while(t--) {
		short n; cin >> n;
		short a[n][n];
		for(auto& i:a) for(auto& j:i) cin >> j;
		for(int i = 0; i < n; i++) {
			if(!(i%2))
				for(int j = 0; j < n; j++) cout << a[i][j] << " ";
			else
				for(int j = n-1; j >= 0; j--) cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}