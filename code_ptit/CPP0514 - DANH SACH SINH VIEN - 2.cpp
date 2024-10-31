// CPP0514 - DANH SACH SINH VIEN - 2.cpp
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

struct SinhVien{
	string msv, ht, l, ns;
	float gpa;
};

int id = 1;
string MSV() {
	string ma = to_string(id);
	string res;
	res.insert(0, 3-ma.size(), '0');
	res += ma;
	res.insert(0, "B20DCCN");
	id++;
	return res;
}

void DATE(string& date) {
	if(date[1] == '/') date.insert(0, 1, '0');
	if(date[4] == '/') date.insert(3, 1, '0');
}

void HOTEN(string& hoten) {
	stringstream ss(hoten);
	string word;
	vector<string> ten;
	while(ss >> word) {
		word[0] = toupper(word[0]);
		f(i, 1 , word.size()) word[i] = tolower(word[i]);
		ten.pb(word);
	}
	hoten = "";
	f(i, 0 , ten.size()-1) hoten += ten[i] + " ";
	hoten += ten[ten.size()-1];
}

void nhapSV(SinhVien& sv) {
	sv.msv = MSV();
	getline(cin, sv.ht);
	while(sv.ht.size() == 0)
		getline(cin, sv.ht);
	// HOTEN(sv.ht);
	cin >> sv.l >> sv.ns >> sv.gpa;
	DATE(sv.ns);
}

void nhap(SinhVien SV[], int N) {
	f(i, 0, N) nhapSV(SV[i]);
}

void in(SinhVien SV[], int N) {
	f(i, 0, N) {
		cout << SV[i].msv << " " << SV[i].l << " " << SV[i].ns << " " << fixed << setprecision(2) << SV[i].gpa << ln;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}