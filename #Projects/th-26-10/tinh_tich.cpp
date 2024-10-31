#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int a, b; cin >> a >> b;
		long long m[a], n[b];
		for(int i = 0; i < a; i++) cin >> m[i];
		for(int i = 0; i < b; i++) cin >> n[i];
		sort(m, m+a);
		sort(n, n+b);
		long long res = n[0]*m[a-1];
		cout << res << endl;
	}
	return 0;
}