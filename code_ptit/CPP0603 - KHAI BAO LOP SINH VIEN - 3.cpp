// CPP0603 - KHAI BAO LOP SINH VIEN - 3.cpp
// CPP0601 - KHAI BAO LOP SINH VIEN - 1.cpp
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

class SinhVien {
public:
	string msv, ht, lop, ns;
	float gpa;
public:
	SinhVien() {
		msv = "", ht = "", lop = "", ns = "", gpa = 0;
	}
	friend istream& operator>>(istream& input, SinhVien& sv) {
		scanf("\n");
		sv.msv = ID(3, "B20DCCN");
		getline(input, sv.ht);
		getline(input, sv.lop);
		getline(input, sv.ns);
		input >> sv.gpa;
		NAME(sv.ht); DATE(sv.ns);
		return input;
	}
	friend ostream& operator<<(ostream& output, const SinhVien& sv) {
		output << sv.msv << " " << sv.ht << " " << sv.lop << " " << sv.ns << " " << fixed << setprecision(2) << sv.gpa << ln;
		return output;
	}
	// ~SinhVien();
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}