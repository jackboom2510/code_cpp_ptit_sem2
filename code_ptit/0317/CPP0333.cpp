// CHUẨN HÓA HỌ TÊN
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
	 	word[0] = toupper(word[0]);
		name.push_back(word);
	}
	int st = name.size();
	for(auto& i:name[st-1]) i = toupper(i);
	string res;
	for(int i = 0; i < st-2; i++)
		res += name[i] + " ";
	res += name[st-2] + ", " + name[st-1];
	cout << res;

	return 0;
}