// CHÚC MỪNG NĂM MỚI
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int n; cin >> n;
	getchar();
	set<string> ws;
	while(n--) {
		string w;
		getline(cin, w);
		ws.insert(w);
	}
	cout << ws.size();

	return 0;
}