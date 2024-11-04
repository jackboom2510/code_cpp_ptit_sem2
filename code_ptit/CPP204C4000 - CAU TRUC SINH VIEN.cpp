// CPP204C4000 - CAU TRUC SINH VIEN.cpp
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

typedef struct SinhVien {
	string msv, ten, lop, ns;
	float gpa;
} SV;
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

void nhapThongTinSV(SV& sv) {
	sv.msv = ID(3, "N20DCCN");
	scanf(ln);
	getline(cin, sv.ten);
	cin >> sv.lop >> sv.ns >> sv.gpa;
	DATE(sv.ns);
}

void inThongTinSV(SV sv) {
	cout << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.ns << " " << fixed << setprecision(2) << sv.gpa << ln;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}