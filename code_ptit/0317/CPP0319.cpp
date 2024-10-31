// NHỎ NHẤT - LỚN NHẤT
#include <iostream>
#include <vector>

using namespace std;

void max(int m, int s) {
	vector<int> n;
	while(m--) {
		if(s > 9) {
			n.push_back(9);
			s-=9;
		}
		else {
			n.push_back(s);
			s = 0;
		}
	}
	for(int i = 0; i < n.size(); i++) cout << n[i];
}

void min(int m, int s) {
	vector<int> n;
	while(m--) {
		if(s > 9) {
			n.push_back(9);
			s-=9;
		}
		else if(m > 0 && s != 1) {
			n.push_back(s-1);
			s = 1;
		}
		else if(m > 0 && s == 1) n.push_back(0);
		else n.push_back(s);
	}
	for(int i = n.size()-1; i >= 0; i--) cout << n[i];
}

int main() {
	// int t; cin >> t;
	int t = 1;
	while(t--) {
		int m, s; cin >> m >> s;
		// if(m == 1 && s == 0) cout << "0 0";
		/*else */if(s > 9*m || s < 1) cout << "-1 -1";
		else {
			min(m, s);
			cout << " ";
			max(m, s);
		}
		// cout << endl;
	}

	return 0;
}