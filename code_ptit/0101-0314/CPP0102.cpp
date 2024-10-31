#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		char a;
		cin >> a;
		if(a >= 97 && a <= 122) a -= 32;
		else if(a >= 65 && a <= 90) a += 32;
		cout << a << endl;
	}
	return 0;
}