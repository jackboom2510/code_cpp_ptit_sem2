#include <iostream>
using namespace std;

long long F[92];
void era() {
	F[1] = 1; F[2] = 1;
	for(int i = 3; i <= 92; i++)
		F[i] = F[i-1] + F[i-2];
}

int main() {
	era();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << F[n] << endl;
	}

	return 0;
}