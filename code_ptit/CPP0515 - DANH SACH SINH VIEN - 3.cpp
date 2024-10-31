// CPP0515 - DANH SACH SINH VIEN - 3.cpp
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

typedef struct SinhVien {
	string id, name, date;
	string cl;
	float gpa;
} PS;

int id = 1;
string ID(const int capacity ,const string prefix) {
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

void nhapSV(PS& sv) {
	sv.id = ID(3, "B20DCCN");
	getline(cin, sv.name);
	while(sv.name.size() == 0)
		getline(cin, sv.name);
	cin >> sv.cl >> sv.date >> sv.gpa;
	NAME(sv.name); DATE(sv.date);
}

void nhap(SinhVien SV[], int N) {
	f(i, 0, N) nhapSV(SV[i]);
}

bool cmp(const PS& a, const PS& b) {
	return a.gpa > b.gpa;
}

void sapxep(SinhVien SV[], int N) {
	sort(SV, SV+N, cmp);
}

void in(SinhVien SV[], int N) {
	f(i, 0, N) {
		cout << SV[i].id << " " << SV[i].name << " " << SV[i].cl << " " << SV[i].date << " " << fixed << setprecision(2) << SV[i].gpa << ln;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}