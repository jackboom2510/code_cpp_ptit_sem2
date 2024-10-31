#include <iostream>
#include <string>
#include <vector>

using namespace std;

int isip4(string ip) {
	int count = 0;
	int start = 0;
	for(int i = 0; i <= ip.size(); i++) {
		if(ip[i]=='.' || i == ip.size()) {
			vector<int> num;
			int n = 0;
			for(int j = start; j < i; j++) {
				num.push_back(ip[j]-48);
			}
			start = i+1;
			for(auto i:num) {
				n = n*10 + i;
			}
			count++;
			if(n < 0 || n > 255) return 0;
		}
	}
	if(count > 4) return 0;
	return 1;
}
int main() {
	int t; cin >> t;
	while(t--) {
		string ip;
		cin >> ip;
		if(isip4(ip)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}

	return 0;
}