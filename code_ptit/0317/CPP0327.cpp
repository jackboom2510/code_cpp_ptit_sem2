// CHIA HẾT CHO 5
#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		string n; cin >> n;
		int r = 0;
		for(int i = 0; i < n.size(); i++)
			r = (2*r + n[i]-48)%5;
		if(!r) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}