// CPP0313	LOẠI BỎ TỪ TRONG XÂU
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string s, word;
	getline(cin, s); cin >> word;
	stringstream ss(s);
	string tmp;
	vector<string> vec;
	while(ss >> tmp)
		vec.push_back(tmp);
	for(auto v:vec)
		if(v!=word) cout << v << " ";
	cout << endl;

	return 0;
}