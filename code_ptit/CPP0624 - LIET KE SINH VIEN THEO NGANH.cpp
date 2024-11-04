// CPP0624 - LIET KE SINH VIEN THEO NGANH.cpp
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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define gl(input, str) getline(input, str); while(str.size() == 0) getline(input, str);
#define f(i,s,e) for(int i = s; i < e; i++)
#define rf(i,s,e) for(int i = s; i >= e; i--)
#define ln "\n"
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef class SinhVien {
private:
	string msv, ht, lop, email, nganh;
public:
	SinhVien() { msv = ht = lop = email = " "; }
	string getNganh() { return this->nganh; }
	string getLop() { return this->lop; }
	friend istream& operator>>(istream& input, SinhVien& sv) {
		input >> sv.msv;
		gl(input, sv.ht);
		input >> sv.lop >> sv.email;
		sv.nganh = sv.msv.substr(5, 2);
		return input;
	}
	friend ostream& operator<<(ostream& output, const SinhVien& sv) {
		output << sv.msv << " " << sv.ht << " " << sv.lop << " " << sv.email;
		return output;
	}

} SV;

void solve()
{
	int N; cin >> N;
	SV ds[N];
	f(i, 0, N) cin >> ds[i];
	int Q; cin >> Q;
	f(i, 0, Q) {
		string nganhCT_; gl(cin, nganhCT_);
		vector<string> nganhHoc;
		stringstream ss(nganhCT_);
		string word;
		while(ss >> word) {
			transform(all(word), word.begin(), ::toupper);
			nganhHoc.pb(word);
		}
		string maNganh, nganhCT;
		f(i, 0, 2) maNganh += nganhHoc[i][0];
		f(i, 0, nganhHoc.size()-1) nganhCT += nganhHoc[i] + " ";
		nganhCT += nganhHoc[nganhHoc.size()-1];
		
		cout << "DANH SACH SINH VIEN NGANH " << nganhCT << ":" << ln;
		for(auto sv:ds) {
			string mn = sv.getNganh();
			if((maNganh == "CN" || maNganh == "AT") && sv.getLop()[0] == 'E') {}
			else if(mn == maNganh) cout << sv << ln;
		}
	}
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