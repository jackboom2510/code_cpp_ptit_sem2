// CPP0629 - DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 2
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
#define gl(input, str) getline(input, str); while(str.size() == 0) getline(input, str);
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

typedef class DoanhNghiep {
private:
	string m, t;
public:
	int ssv;
	// int ssv { return this->ssv; }
	friend istream& operator>>(istream& input, DoanhNghiep& dn) {
		input >> dn.m;
		gl(input, dn.t);
		input >> dn.ssv;
		return input;
	}
	friend ostream& operator<<(ostream& output, const DoanhNghiep& dn) {
		output << dn.m << " " << dn.t << " " << dn.ssv;
		return output;
	}
	friend bool operator<(const DoanhNghiep& a, const DoanhNghiep& b) {
		if(a.ssv != b.ssv) return a.ssv > b.ssv;
		return a.m < b.m;
	}
} DN;

void solve()
{
	int N; cin >> N;
	DN ds[N];
	for(auto& it:ds) cin >> it;
	sort(ds, ds+N);
	int Q; cin >> Q;
	f(i, 0, Q) {
		int a, b; cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		int j = 0, s = N, e = N;
		for(; j < N; j++) {
			if(ds[j].ssv <= b) {
				s = j++;
				break;
			}
		}
		for(; j < N; j++) {
			if(ds[j].ssv < a) {
				e = j++;
				break;
			}
		}
		f(index, s, e) cout << ds[index] << ln;
	}
}

int main()
{
	fast_cin();
	int t = 1;
	// cin >> t;
	for(int it=1; it<=t; it++) {
		solve();
	}
	return 0;
}