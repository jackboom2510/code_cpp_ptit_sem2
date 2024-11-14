// CPP0108 - SỐ TĂNG GIẢM.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef vector<ll> v64;
typedef vector<int> v32;
#define gl(input, str) getline(input, str); while(str.size() == 0) getline(input, str);
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define f(i,s,e) for(int i = s; i < e; i++)
#define rf(i,s,e) for(int i = s; i >= e; i--)
#define ft(data_type, i, s, e) for(data_type i = s; i < e; i++)
#define ln "\n"
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

int res[] = {0, 4, 20, 38, 50, 38, 20};

int n, c = 0;
int a[11] = {};

int isPrime(ll n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n%i==0) return 0;
	return 1;
}


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
		a[i] = j;
		if(i == n) {
			int x = genReduceNumber();
			if(isPrime(x)) c++;
			int y = genIncreaseNumber();
			if(isPrime(y)) c++;
		} else {
			Try(i + 1);
		}
	}
}

int cmp(const char& a, const char& b) {
	if(a == b) return 0;
	return (a < b) ? 1:-1;
}

int isSTG(ll n_) {
	string n = to_string(n_);
	if(n.size() == 1) return 1;
	int mark = cmp(n[0], n[1]);
	if(mark == 0) return 0;
	f(i, 2, n.size()) {
		if(cmp(n[i-1], n[i]) != mark) return 0;
	}
	return 1;
}

P
int isSTM(ll n) {
	if(isPrime(n) && isSTG(n)) return 1;
	return 0;
}

void solve()
{
	int scs, count = 0; cin >> scs;
	ft(ll, i, pow(10, scs-1), pow(10, scs)) {
		if(isSTM(i)) {
			// cout << i << " ";
			count++;
		}
	}
	cout << count << ln;
}

int main()
{
	fast_cin();
	int t;
	cin >> t;
	for(int it=1; it<=t; it++) {
		solve();
	}
	return 0;
}