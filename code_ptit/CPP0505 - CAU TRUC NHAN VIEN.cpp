// CPP0505 - CAU TRUC NHAN VIEN.cpp
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

typedef long long ll;
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

struct NhanVien {
	string mnv, ht, gt, ns, dc, mst, hd;
};

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

void nhap(NhanVien& nv) {
	nv.mnv = ID(5, "");
	getline(cin, nv.ht);
	getline(cin, nv.gt);
	getline(cin, nv.ns);
	getline(cin, nv.dc);
	getline(cin, nv.mst);
	getline(cin, nv.hd);
}

void in(const NhanVien& nv) {
	cout << nv.mnv << " " << nv.ht << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mst << " " << nv.hd << ln;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}