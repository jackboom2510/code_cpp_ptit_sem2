// CPP0625 - SAP XEP DANH SACH GIANG VIEN.cpp
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

int id = 1;
string ID(const int capacity, const string prefix) {
	string ma = to_string(id);
	string res;
	res.insert(0, capacity-ma.size(), '0');
	res += ma;
	res.insert(0, prefix);
	id++;
	return res;
}

typedef class GiangVien {
private:
	string mgv, ht, bm, mm, ten;
public:
	GiangVien() { mgv = ht = bm = " "; }
	friend istream& operator>>(istream& input, GiangVien& gv) {
		gv.mgv = ID(2, "GV");
		gl(input, gv.ht);
		string word;
		stringstream ss1(gv.ht);
		while(ss1 >> word) {}
		gv.ten = word;
		gl(input, gv.bm);
		stringstream ss2(gv.bm);
		while(ss2 >> word) {
			gv.mm += toupper(word[0]);
		}
		return input;
	}
	friend ostream& operator<<(ostream& output, const GiangVien& gv) {
		output << gv.mgv << " " << gv.ht << " " << gv.mm;
		return output;
	}
	friend bool operator<(const GiangVien& a, const GiangVien& b) {
		if(a.ten != b.ten) return a.ten < b.ten;
		return a.mgv < b.mgv;
	}
} GV;

void solve()
{
	int N; cin >> N;
	GV ds[N];
	f(i, 0, N) cin >> ds[i];
	sort(ds, ds+N);
	f(i, 0, N) cout << ds[i] << ln;
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