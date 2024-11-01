// CPP0611 - DANH SACH DOI TUONG SINH VIEN - 1.cpp
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
#define fsp fixed << setprecision(2)

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
	friend ostream &operator<<(ostream& output, const SinhVien& sv) {
		output << sv.msv << " " << sv.ht << " " << sv.lop << " " << sv.ns << " " << fsp << sv.gpa << ln;
		return output;
	}
	friend istream &operator>>(istream& input, SinhVien& sv) {
		sv.msv = ID(3, "B20DCCN");
		getline(input, sv.ht);
		while(sv.ht.size() == 0) getline(input, sv.ht);
		input >> sv.lop >> sv.ns >> sv.gpa;
		DATE(sv.ns);
		return input;
	}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}