// CPP0614 - DANH SACH DOI TUONG NHAN VIEN.cpp
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

typedef class NhanVien {
private:
	string mnv, ht, gt, ns, dc, mst, hd;
public:
	friend istream& operator>>(istream& input, NhanVien& nv) {
		nv.mnv = ID(5, "");
		scanf(ln);
		getline(input, nv.ht);
		// input >> nv.ht >> nv.gt >> nv.ns;
		getline(input, nv.gt);
		getline(input, nv.ns);
		getline(input, nv.dc);
		// input >> nv.dc;
		getline(input, nv.mst);
		getline(input, nv.hd);
		return input;
	}
	friend ostream& operator<<(ostream& output, const NhanVien& nv) {
		output << nv.mnv << " " << nv.ht << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mst << " " << nv.hd << ln;
		return output;
	}
} NV;

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}