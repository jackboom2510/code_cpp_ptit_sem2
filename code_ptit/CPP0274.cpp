// CPP0274	ĐẾM SỐ PHẦN TỬ LẶP LẠI
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
	// Test cases:
	short t;
	// t = 1;
	cin >> t;
	while(t--) {
		// Inputs:
		int n; cin >> n;
		int a[n];
		vector<pair<int,int>> vec;
		// Functions:
		for(auto& i:a) cin >> i;
		for(int i = 0; i < n; i++) {
			int flag = 0;
			for(int j = 0; j < vec.size(); j++) {
				if(a[i] == vec[j].first){
					vec[j].second++;
					flag = 1;
					break;
				}
			}
			if(!flag) vec.push_back(make_pair(a[i], 1));
		}
		int count = 0;
		for(int i = 0; i < vec.size(); i++)
			if(vec[i].second > 1) count += vec[i].second;
		// Outputs:
		cout << count << endl;
	}

	return 0;
}