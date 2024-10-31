// CHIA HẾT CHO 11
#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		string s; 
		cin >> s;
		int c = 0, l = 0;
		for(int i = 0; i < s.size(); i++) {
			int x = s[i] - 48;
			if(i%2 == 0) c+=x;
			else l+=x;
		}
		if((c-l)%11==0) cout << "1" << endl;
		else cout << "0" << endl;
	}

	return 0;
}