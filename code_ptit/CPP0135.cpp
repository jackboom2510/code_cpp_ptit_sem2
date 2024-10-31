#include <iostream>
#include <math.h>

using namespace std;

int isSNT(long long n) {
	if(n == 2) return 1;
	else if(n < 2 || n%2==0) return 0;
	for(int i = 3; i <= sqrt(n); i+=2)
		if(n%i == 0) return 0;
	return 1;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		for(int i = 2; i*i <= n;) {
			cout << i*i << " ";
			i++;
			while(!isSNT(i)) i++;
		}
		cout << endl;
	}
	
	return 0;
}