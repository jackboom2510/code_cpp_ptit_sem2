#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
	if (n <= 1)
	return false;
	for (int i = 2; i * i <= n; i++)
	{ if (n % i == 0) return false; } return true;
}

int a[11] {};
int n, c = 0;

int genReduceNumber() {
	int num = 0;
	for (int i = 1; i <= n; i++) {
		num = num * 10 + a[i];
	}
	return num;
}

int genIncreaseNumber() {
	int num = 0;
	for (int i = n; i >= 1; i--) {
		num = num * 10 + a[i];
	}
	return num;
}

void Try(int i) {
	for (int j = a[i - 1] + 1; j <= 9 - n + i; j++) {
3		a[i] = j;
		if(i == n) {
			int x = genReduceNumber();
			if(isPrime(x)) {
				cout << x << " ";
				c++;
			}
			int y = genIncreaseNumber();
			if(isPrime(y)) {
				cout << y << " ";
				c++;
			}
		} else {
		Try(i + 1);
		}
	}
}

int main() {
	int t = 1;
	// cin >> t;
	while (t--) {
		cin >> n;
		c = 0;
		Try(1); cout << c << endl;
	}
}