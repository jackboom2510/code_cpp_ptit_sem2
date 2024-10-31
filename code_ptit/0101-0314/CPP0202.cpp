#include <iostream>
#include <limits.h>
using namespace std;

void xuatMang(long long a[], int n) {
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void swap(long long &a, long long &b) {
	long long tmp = a;
	a = b;
	b = tmp;
}

int partition(long long a[], int left, int right) {
	long long pivot = a[right];
	int i = left-1;
	for(int j = left; j <= right-1; j++) {
		if(a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[right]);
	return i+1;
}

void sort(long long a[], int left, int right) {
	if(left < right) {
		int pi = partition(a, left, right);
		sort(a, left, pi-1);
		sort(a, pi+1, right);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, 0, n-1);
		int minD = INT_MAX;
		for(int i = 1; i < n; i++) {
			int d = a[i] - a[i-1];
			if(d < minD) minD = d;
		}
		cout << minD << endl;
	}
	return 0;
}