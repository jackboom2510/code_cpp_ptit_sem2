// CPP0615 - SAP XEP DANH SACH DOI TUONG NHAN VIEN.cpp
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
#define f(i,s,e) for(int i = s; i < e; i++)
#define rf(i,s,e) for(int i = s; i >= e; i--)
#define ln "\n"
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define gl(input, str) getline(input, str); while(str.size() == 0) getline(input, str);

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

class Date {
private:
	int d, m, y;
	string date;
public:
	Date(string date_ = "") {
		date = date_;
	}
	void stdlize() {
		if(this->date[1] == '/') this->date.insert(0, 1, '0');
		if(this->date[4] == '/') this->date.insert(3, 1, '0');
	}
	friend istream& operator>>(istream& input, Date& dt) {
		// Date format: mm/dd/yyyy
		input >> dt.date;
		dt.stdlize();
		dt.m = (dt.date[0]-'0')*10+(dt.date[1]-'0');
		dt.d = (dt.date[3]-'0')*10+(dt.date[4]-'0');
		dt.y = (dt.date[6]-'0')*1000+(dt.date[7]-'0')*100+(dt.date[8]-'0')*10+(dt.date[9]-'0');
		return input;
	}
	friend ostream& operator<<(ostream& output, const Date& dt) {
		output << dt.date;
		return output;
	}
	friend bool operator<(const Date& a, const Date& b) {
		if(a.y != b.y) return a.y < b.y;
		else if(a.m != b.m) return a.m < b.m;
		return a.d < b.d;
	}
	friend bool operator>(const Date& a, const Date& b) {
		if(a.y != b.y) return a.y > b.y;
		else if(a.m != b.m) return a.m > b.m;
		return a.d > b.d;
	}
};

typedef class NhanVien {
private:
	string mnv, ht, gt, dc, mst, hd;
	Date ns;
public:
	friend istream& operator>>(istream& input, NhanVien& nv) {
		nv.mnv = ID(5, "");
		gl(input, nv.ht);
		input >> nv.gt >> nv.ns;
		gl(input, nv.dc);
		input >> nv.mst >> nv.hd;
		return input;
	}
	friend ostream& operator<<(ostream& output, const NhanVien& nv) {
		output << nv.mnv << " " << nv.ht << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mst << " " << nv.hd << ln;
		return output;
	}
	friend bool operator<(NhanVien const& a, NhanVien const& b) {
		return a.ns < b.ns;
	}
} NV;

void sapxep(NhanVien *ds, int n) {
	sort(ds, ds+n);
}

int main(){
	NhanVien ds[50];
	int N,i;
	cin >> N;
	for(i=0;i<N;i++) cin >> ds[i];
	for(i=0;i<N;i++) cout << ds[i];
	return 0;
}