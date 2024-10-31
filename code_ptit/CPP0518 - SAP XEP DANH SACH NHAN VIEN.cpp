// CPP0518 - SAP XEP DANH SACH NHAN VIEN.cpp
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

struct Date{
	int day, month, year;
};

typedef struct NhanVien {
	string id, name, date, sex, add, mst, contractDate;
	Date ngaysinh;
} NV;

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

void DATE(string& date) {
	if(date[1] == '/') date.insert(0, "0");
	if(date[4] == '/') date.insert(3, "0");
}

void NAME(string& name) {
	stringstream ss(name);
	string word;
	vector<string> vname;
	while(ss >> word) {
		word[0] = toupper(word[0]);
		f(i, 1 , word.size()) word[i] = tolower(word[i]);
		vname.pb(word);
	}
	name = "";
	f(i, 0 , vname.size()-1) name += vname[i] + " ";
	name += vname[vname.size()-1];
}

Date structDate(string date) {
	Date res;
	v32 v;
	stringstream ss(date);
	string token;
	while(getline(ss, token, '/')) {
		stringstream tmp; int out;
		tmp << token;
		tmp >> out;
		v.pb(out);
	}
	res.month = v[0], res.day = v[1], res.year = v[2];
	return res;
}

void nhap(NV& nv) {
	nv.id = ID(5, "");
	getline(cin, nv.name);
	while(nv.name.size() == 0)
		getline(cin, nv.name);
	cin >> nv.sex >> nv.date;
	getline(cin, nv.add);
	while(nv.add.size() == 0)
		getline(cin, nv.add);
	cin >> nv.mst >> nv.contractDate;
	DATE(nv.date); DATE(nv.contractDate);
	nv.ngaysinh = structDate(nv.date);
}

bool cmp(const NV& a, const NV& b) {
	if(a.ngaysinh.year != b.ngaysinh.year) return a.ngaysinh.year < b.ngaysinh.year;
	else if(a.ngaysinh.month != b.ngaysinh.month) return a.ngaysinh.month < b.ngaysinh.month;
	return a.ngaysinh.day < b.ngaysinh.day;
}

void sapxep(NV ds[], int N) {
	sort(ds, ds+N, cmp);
}

void in(NV nv) {
	cout << nv.id << " " << nv.name << " " << nv.sex << " " << nv.date << " " << nv.add << " " << nv.mst << " " << nv.contractDate << ln;
}

void inds(NV ds[], int N) {
	f(i, 0, N) in(ds[i]);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}