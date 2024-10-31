// CPP0312	XÂU PANGRAM
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	short t; cin >> t;
	while(t--) {
		string s; int k;
		cin >> s >> k;
		set<char> se;
		for(int i = 0; i < s.size(); i++)
			if(s[i] >= 'a' && s[i] <= 'z') se.insert(s[i]);
		if(26-se.size() <= k) cout << "1" << endl;
		else cout << "0" << endl;
	}

	return 0;
}