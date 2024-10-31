// ĐỊA CHỈ EMAIL - 1
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> name;
	while(ss >> word) {
		for(auto& i:word) i = tolower(i);
		name.push_back(word);
	}
	string res;
	int st = name.size();
	res += name[st-1];
	for(int i = 0; i < st-1; i++)
		res += name[i][0];
	res += "@ptit.edu.vn";
	cout << res;

	return 0;
}