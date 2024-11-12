// personalcode.cpp
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

static int c, sc;

class TK {
private:
	// Ten, Phi ngay, Phi thang, So khoa, Loi nhuan (Tiet kiem), Phi rong
	string t; 
	int pc, pd, pm, pt, kd, km;
	int lc, ld, lm, lt;
	int rc, rd, rm, rt;
public:
	TK() { t = "", pc = pd = pm = kd = km = lc = ld = lm = rc = rd = rm = rt = pt = lt = 0; }
	friend istream& operator>>(istream& is, TK& tk) {
		gl(is, tk.t);
		is >> tk.pd >> tk.kd;
		tk.km = tk.kd*30;
		tk.pc = tk.pd/tk.kd;
		tk.pm = tk.pd*30;
		tk.pt = tk.pc*sc;
		tk.lc = c-tk.pc;
		tk.ld = tk.lc*tk.kd;
		tk.lm = tk.ld*30;
		tk.lt = tk.lc*sc;
		tk.rc = c;
		tk.rd = c*tk.kd;
		tk.rm = tk.rd*30;
		tk.rt = c*sc;
		return is;
	}
	// Ten Phi: moi_khoa  ngay  thang
	// Base_cost:
	// Bunddle:
	// Loi_nhuan:
	friend ostream& operator<<(ostream& os, const TK& tk) {
		os << tk.t  << " "  << tk.kd << " "  << tk.km << ln;
		os << tk.rc << " \t" << tk.rd << " \t" << tk.rm << " \t" << tk.rt << ln;
		os << tk.pc << " \t" << tk.pd << " \t" << tk.pm << " \t" << tk.pt << ln;
		os << tk.lc << " \t" << tk.ld << " \t" << tk.lm << " \t" << tk.lt << ln;
		return os;
	}
};

void solve()
{
	cin >> c >> sc;
	cout << c << " " << sc << ln;
	TK ds[2];
	f(i, 0, 2) cin >> ds[i];
	f(i, 0, 2) cout << ds[i];
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