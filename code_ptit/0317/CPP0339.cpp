// CPP0339.cpp - ĐẦU CUỐI GIỐNG NHAU
#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int count = 0;
		int slen = s.size();
		for(int i = 0; i < slen; i++) {
			for(int j = i; j < slen; j++) {
				if(s[j] == s[i])
					count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}