// SỐ ĐẸP
#include <iostream>
#include <string>

using namespace std;

int isSoDep(string num) {
	int len = num.size();
	for(int i = 0; i < len/2; i++)
		if(num[i]%2 != 0|| num[i] != num[len-1-i])  return 0;
	return 1;
}

int main() {
	int n; cin >> n;
	while(n--) {
		string num; cin >> num;
		if(isSoDep(num)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}

	return 0;
}