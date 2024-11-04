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
#define ln "\n"
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

map<string, int> myMap = {{"one", 1}, {"two", 2}, {"three", 3}};
string bf = "";

class Data {
public:
	string name;
	vector<string> data;
public:
	friend istream& operator>>(istream& is, Data& dt) {
		if(bf.size() == 0) is >> dt.name;
		else {
			dt.name = bf;
			bf = "";
		}
		while(true) {
			string m; cin >> m;
			if(myMap.find(m) == myMap.end()) {
				bf = m;
				break;
			}
			dt.data.pb(m);
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, const Data& dt) {
		os << dt.name << "{ ";
		for(auto it:dt.data) os << it << " ";
		os << "}" << ln;
		return os;
	}
};

void solve()
{
	Data DT[3];
	f(i, 0, 3) cin >> DT[i];
	f(i, 0, 3) cout << DT[i];
}

int main()
{
	fast_cin();
	int t = 1;
	// cin >> t;
	for(int it=1; it<=t; it++) {
		solve();
	}
	return 0;
}