#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, tmp;	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size(); i++) {
		if((v[i]+v[i+1])%2==0) {
			auto pos = v.begin()+i;
			v.erase(pos); v.erase(pos);
			i-=2;
		}
	}
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;


	return 0;
}