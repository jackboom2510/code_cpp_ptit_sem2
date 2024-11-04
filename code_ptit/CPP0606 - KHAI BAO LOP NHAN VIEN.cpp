// CPP0606 - KHAI BAO LOP NHAN VIEN.cpp
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

void DATE(string& date) {
	if(date[1] == '/') date.insert(0, 1, '0');
	if(date[4] == '/') date.insert(3, 1, '0');
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

typedef class NhanVien {
private:
	string mnv, ht, gt, ns, dc, mst, hd;
public:
	friend istream& operator>>(istream& input, NhanVien& nv) {
		nv.mnv = ID(5, "");
		scanf(ln);
		getline(input, nv.ht);
		getline(input, nv.gt);
		getline(input, nv.ns);
		getline(input, nv.dc);
		getline(input, nv.mst);
		getline(input, nv.hd);
		return input;
	}
	friend ostream& operator>>(ostream& output, const NhanVien& nv) {
		output << nv.mnv << " " << nv.ht << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mst << " " << nv.hd;
		return output;
	}
} NV;

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}