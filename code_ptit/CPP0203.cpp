#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n], mark[n+2];
		for(int i = 0; i <= n+1; i++) mark[i] = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] > 0 && a[i] <= n) mark[a[i]] = 1;
		}
		for(int i = 1; i <= n+1; i++) {
			if(mark[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}