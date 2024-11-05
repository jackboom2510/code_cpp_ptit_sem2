#include <bits/stdc++.h>
#include <fstream>
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
string ID(int& id, const string& prefix, const int& capacity) {
	string ma = to_string(id);
	string res;
	res.insert(0, capacity-ma.size(), '0');
	res += ma;
	res.insert(0, prefix);
	id++;
	return res;
}
class MH {
public:
	string mmh, tmh;
	int stc;
	float dcc, dkt, dt, dtb, tscc, tskt, tst;
public:
	MH(float tscc_ = 0.1, float tskt_ = 0.2, float tst_ = 0.7) {
		mmh = tmh = "", stc = dcc = dkt = dt = 0;
		tscc = tscc_, tskt = tskt_, tst = tst_;
	}
	friend istream& operator>>(istream& is, MH& mh) {
		is >> mh.mmh >> mh.stc;
		gl(is, mh.tmh);
		return is;
	}
	friend ostream& operator<<(ostream& os, const MH& mh) {
		os << mh.tmh << " " << mh.stc << " x " << fixed << setprecision(1) << mh.dtb << ln;
		return os;
	}
};
map<string, MH> dsmh;
string buffer = "";
class SV {
private:
	string stt, msv, ht, lop;
	vector<MH> mh;
	float tongDiem, gpa;
	int soTC;
	bool isDetailed;
public:
	SV() { msv = ht = lop = "", tongDiem = soTC = gpa = 0; }
	void minimize() { isDetailed = false;};
	friend istream& operator>>(istream& is, SV& sv) {
		sv.stt = ID(id, "", 1);
		sv.isDetailed = true;
		if(buffer.size() == 0) is >> sv.msv;
		else {
			sv.msv = buffer;
			buffer = "";
		}
		gl(is, sv.ht)
		getline(is, sv.lop);
		while(true) {
			string m; cin >> m;
			if(dsmh.find(m) == dsmh.end()) {
				buffer = m;
				break;	
			}
			MH tmp = dsmh[m];
			cin >> tmp.dcc >> tmp.dkt >> tmp.dt;
			tmp.dtb = tmp.dcc*tmp.tscc + tmp.dkt*tmp.tskt + tmp.dt*tmp.tst;
			sv.soTC += tmp.stc;
			sv.tongDiem += tmp.dtb*tmp.stc;
			sv.mh.pb(tmp);
		}
		sv.gpa = sv.tongDiem/sv.soTC;
		return is;
	}
	friend ostream& operator<<(ostream& os, const SV& sv) {
		os << sv.stt << " " << sv.msv << " " << sv.ht << " " << sv.lop << " " << /* sv.soTC << " " << */ fixed << setprecision(2) /* << sv.tongDiem << " " */ << sv.gpa << ln;
		if(sv.isDetailed) {
			for(auto it:sv.mh) os << it;
			os << "                     " << sv.soTC << "   " << fixed << setprecision(2) << sv.tongDiem << ln;
		}
		return os;
	}
	friend bool isSinhVien(const SV& sv, const float& d) {
		return sv.gpa >= d;
	}
	friend bool cmp(const SV& a, const SV& b);
};

bool cmp(const SV& a, const SV& b) {
	// int p1 = a.mh.size(), p2 = b.mh.size();
	// if(p1 != p2) return p1 > p2;
	return a.gpa > b.gpa;
}

void solve() {
	int N, M; cin >> N >> M;
	SV dssv[M];
	f(i, 0, N) {
		MH m; cin >> m;
		dsmh[m.mmh] = m;
	}
	f(i, 0, M) cin >> dssv[i];
	sort(dssv, dssv+M, cmp);
	f(i, 0, M) {
		cout << dssv[i];
		dssv[i].minimize();
	}
	cout << "DANH SACH SINH VIEN CO GPA >= 7:" << ln;
	f(i, 0, M) {
		if(isSinhVien(dssv[i], 7)) cout << dssv[i];
	}
}

void solve() {
	fstream("")
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