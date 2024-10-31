// CPP0259	TÍCH MA TRẬN
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	short t;
	t = 1;
	// cin >> t;
	while(t--) {
		short n, m, p; cin >> n >> m >> p;
		int a[n][m], b[m][p], c[n][p];
		for(auto& i:a) for(auto& j:i) cin >> j;
		for(auto& i:b) for(auto& j:i) cin >> j;
		for(auto& i:c) for(auto& j:i) j = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < p; j++)
				for(int k = 0; k < m; k++)
					c[i][j] += a[i][k]*b[k][j];
		for(auto& i:c){
			for(auto& j:i) cout << j << " ";
			cout << endl;
		}
	}

	return 0;
}