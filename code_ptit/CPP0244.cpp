// CPP0244	LIỆT KÊ SỐ KHÁC NHAU
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	short t;
	t = 1;
	// cin >> t;
	while(t--) {
		short n; cin >> n;
		int a[n];
		for(auto& i:a) cin >> i;
		sort(a, a + n);
		vector<int> vec;
		for(int i = 0; i < n; i++) {
			int flag = 0;
			for(int j = 0; j < vec.size(); j++) {
				if(a[i] == vec[j]) {
					flag = 1;
					break;
				}
			}
			if(!flag) vec.push_back(a[i]);
		}
		for(auto i:vec) cout << i << " ";
	}

	return 0;
}