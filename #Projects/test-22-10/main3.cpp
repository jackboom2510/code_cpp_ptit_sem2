#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct NhanVien{
	string mnv, hoten, date;
	float hs, yt;
	int isKT;
};

bool cmp1(NhanVien a, NhanVien b) {
	return a.hs > b.hs;
}

bool cmp2(NhanVien a, NhanVien b) {
	return a.yt > b.yt;
}

void nhap(struct NhanVien &x, string id) {
	getchar();
	x.mnv = "NV00" + id;
	f
	getline(cin, x.hoten);
	cin >> x.date >> x.hs >> x.yt;
	if(x.hs >= 8 && x.yt > 90) x.isKT = 1;
	else x.isKT = 0;
}

void xuat(struct NhanVien x) {
	cout << x.mnv << " " << x.hoten << " " << x.date << " " << x.hs << " " << x.yt;
	cout << endl;
}

int main() {
	int soNV; cin >> soNV;
	struct NhanVien NV[soNV];
	for(int i = 0; i < soNV; i++) {
		nhap(NV[i], to_string(i+1));
	}
	sort(NV, NV + soNV, cmp1);
	for(int i = 0; i < soNV; i++) {
		if(NV[i].hs == NV[i+1].hs) {
			int start = i;
			while(NV[i].hs == NV[i+1].hs) i++;
			sort(NV+start, NV+i, cmp2);
		}
	}
	for(int i = 0; i < soNV; i++) {
		if(NV[i].isKT == 1) xuat(NV[i]);
	}

	return 0;
}