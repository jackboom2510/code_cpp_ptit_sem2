// CPP0631 - QUẢN LÝ BÁN HÀNG – 1
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

int mkh_ = 1, mmh_ = 1, mhd_ = 1;
class KhachHang; class MatHang; class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;
map<string, HoaDon> HD;

string ID(int& id_, const string prefix, const int capacity) {
	string id = to_string(id_);
	string res;
	res.insert(0, capacity-id.size(), '0');
	res += id;
	res.insert(0, prefix);
	id_++;
	return res;
}

class KhachHang {
public:
	// friend class HoaDon;
	string mkh, tkh, gt, ns, dc;
public:
	KhachHang() { mkh = tkh = gt = ns = dc = ""; }
	string getMKH() { return mkh;}
	string getTKH() { return tkh; }
	string getGT() { return gt; }
	string getNS() { return ns; }
	string getDC() { return dc; }
	friend istream& operator>>(istream& input, KhachHang& kh) {
		kh.mkh = ID(mkh_, "KH", 3);
		gl(input, kh.tkh);
		input >> kh.gt >> kh.ns;
		gl(input, kh.dc);
		KH[kh.mkh] = kh;
		return input;
	}
	// friend class HoaDon;
};

class MatHang {
public:
	// friend class HoaDon;
	string mmh, tmh, dv;
	ll gm, gb;
public:
	MatHang() { mmh = tmh = dv = "", gm = gb = 0; }
	string getMMH() { return mmh; }
	string getTMH() { return tmh; }
	string getDV() { return dv; }
	ll getGM() { return gm; }
	ll getGB() { return gb; }
	friend istream& operator>>(istream& input, MatHang& mh) {
		mh.mmh = ID(mmh_, "MH", 3);
		gl(input, mh.tmh);
		gl(input, mh.dv);
		input >> mh.gm >> mh.gb;
		MH[mh.mmh] = mh;
		return input;
	}
	// friend class HoaDon;
};

class HoaDon {
private:
	KhachHang user;
	MatHang item;
	string mhd, kh, mh;
	int sl;
	ll tt;
public:
	HoaDon() { mhd = kh = mh = "", sl = tt = 0; }
	friend istream& operator>>(istream& input, HoaDon& hd) {
		hd.mhd = ID(mhd_, "HD", 3);
		input >> hd.kh >> hd.mh >> hd.sl;
		hd.user = KH[hd.kh];
		hd.item = MH[hd.mh];
		hd.tt = hd.item.gb * hd.sl;
		return input;
	}
	friend ostream& operator<<(ostream& output, const HoaDon& hd) {
		output << hd.mhd << " " << hd.user.tkh << " " << hd.user.dc << " " << hd.item.tmh << " " << hd.item.dv << " " << hd.item.gm << " " << hd.item.gb << " " << hd.sl << " " << hd.tt << ln;
		return output;
	}
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}