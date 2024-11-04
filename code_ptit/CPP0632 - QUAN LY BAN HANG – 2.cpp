// CPP0632 - QUẢN LÝ BÁN HÀNG – 2.cpp
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
friend class HoaDon;
public:
	string mkh, tkh, gt, ns, dc;
public:
	KhachHang() { mkh = tkh = gt = ns = dc = ""; }
	friend istream& operator>>(istream& input, KhachHang& kh) {
		if(mkh_ == 1) cin.ignore();
		kh.mkh = ID(mkh_, "KH", 3);
		getline(input, kh.tkh);
		getline(input, kh.gt);
		getline(input, kh.ns);
		getline(input, kh.dc);
		KH[kh.mkh] = kh;
		return input;
	}
	friend ostream& operator<<(ostream& output, const KhachHang& k) {
		output << k.tkh << " " << k.dc;
		return output;
	}
};

class MatHang {
friend class HoaDon;
public:
	string mmh, tmh, dv;
	ll gm, gb;
public:
	MatHang() { mmh = tmh = dv = "", gm = gb = 0; }
	friend istream& operator>>(istream& input, MatHang& mh) {
		mh.mmh = ID(mmh_, "MH", 3);
		cin.ignore();
		getline(input, mh.tmh);
		getline(input, mh.dv);
		input >> mh.gm >> mh.gb;
		MH[mh.mmh] = mh;
		return input;
	}
	friend ostream& operator<<(ostream& output, const MatHang& m) {
		output << m.tmh;
		return output;
	}
};

class HoaDon {
public:
	KhachHang k;
	MatHang h;
	string mhd, kh, mh;
	ll sl, tt, lN;
public:
	HoaDon() { mhd = kh = mh = "", sl = tt = 0; }
	friend istream& operator>>(istream& input, HoaDon& hd) {
		hd.mhd = ID(mhd_, "HD", 3);
		input >> hd.kh >> hd.mh >> hd.sl;
		hd.k = KH[hd.kh]; hd.h = MH[hd.mh];
		hd.tt = hd.h.gb * hd.sl;
		hd.lN = (hd.h.gb - hd.h.gm) * hd.sl;
		return input;
	}
	friend ostream& operator<<(ostream& output, const HoaDon& hd) {
		output << hd.mhd << " " << hd.k << " " << hd.h << " " << hd.sl << " " << hd.tt << " " << hd.lN << ln;
		return output;
	}
	friend bool operator<(const HoaDon& a, const HoaDon& b) {
		return a.lN >= b.lN;
	}
};

void sapxep(HoaDon dshd[], int N) {
	sort(dshd, dshd+N);
}

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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}