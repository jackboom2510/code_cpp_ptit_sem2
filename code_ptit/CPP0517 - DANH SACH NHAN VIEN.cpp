// CPP0517 - DANH SACH NHAN VIEN.cpp
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

struct NhanVien{
	string mnv, ht, gt, dc, mst;
	string ns, nkhd;
};

int id = 1;
string MNV() {
	string ma = to_string(id);
	string res;
	res.insert(0, 5-ma.size(), '0');
	res += ma;
	id++;
	return res;
}

void DATE(string& date) {
	if(date[1] == '/') date.insert(0, 1, '0');
	if(date[4] == '/') date.insert(3, 1, '0');
}

void nhap(NhanVien& nv) {
	nv.mnv = MNV();
	getline(cin, nv.ht);
	while(nv.ht.size() == 0)
		getline(cin, nv.ht);
	cin >> nv.gt >> nv.ns;
	getline(cin, nv.dc);
	while(nv.dc.size() == 0)
		getline(cin, nv.dc);
	cin >> nv.mst >> nv.nkhd;
	DATE(nv.ns); DATE(nv.nkhd);
}

void inds(NhanVien NV[], int N) {
	f(i, 0, N) {
		cout << NV[i].mnv << " " << NV[i].ht << " " << NV[i].gt << " " << NV[i].ns << " " << NV[i].dc << " " << NV[i].mst << " " << NV[i].nkhd << ln;
	}
}

int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(i = 0; i < N; i++) nhap(ds[i]);
	inds(ds,N);
	return 0;
}