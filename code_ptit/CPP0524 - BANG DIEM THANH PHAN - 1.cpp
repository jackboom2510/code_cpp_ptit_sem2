// CPP0524 - BANG DIEM THANH PHAN - 1.cpp
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
#define sp fixed << setprecision(1)

typedef struct SinhVien{
	string msv, ten, lop;
	float diem1, diem2, diem3;
} SV;

void nhap(SV& sv) {
	cin >> sv.msv;
	getline(cin, sv.ten);
	while(sv.ten.size() == 0)
		getline(cin, sv.ten);
	cin >> sv.lop >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

bool cmp(const SV& a, const SV& b) {
	return a.msv < b.msv;
}

void sap_xep(SV ds[], int n) {
	sort(ds, ds+n, cmp);
}

void in_ds(SV ds[], int n) {
	f(i, 0, n) {
		cout << i+1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << sp << ds[i].diem1 << " " << sp << ds[i].diem2 << " " << sp << ds[i].diem3 << ln;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}