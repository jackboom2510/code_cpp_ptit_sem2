// CPP0513.cpp - DANH SÁCH SINH VIÊN - 1
// CPP0504.cpp - CẤU TRÚC SINH VIÊN
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

struct SinhVien {
	string name, msv = "B20DCCN0", cl, date;
	float gpa;
};

void stdlize(string& date) {
	int s = 0, count = 0;
	string res;
	for(int i = 0; i < date.size(); i++) {
		if(date[i] == '/' || i == date.size()-1) {
			string word;
			for(int j = s; j <= i; j++)
				word += date[j];
			s = i+1;
			if(word.size() < 3) res += "0";
			res+=word;
			count++;
		}
	}
	date = res;
}

void nhapSV(struct SinhVien &x) {
	getchar();
	getline(cin, x.name);
	cin >> x.cl >> x.date >> x.gpa;
	stdlize(x.date);
}

void inSV(struct SinhVien x) {
	cout << x.msv << " " << x.name << " " << x.cl << " " << x.date << " " << fixed << setprecision(2) << x.gpa << endl;
}

void nhap(struct SinhVien SV[], int soSV) {
	// getchar();
	for(int i = 0; i < soSV; i++) {
		int stt = i+1;
		if(stt <= 9) SV[i].msv += "0";
		SV[i].msv += to_string(stt);
		nhapSV(SV[i]);
	}
}

void in(struct SinhVien SV[], int soSV) {
	for(int i = 0; i < soSV; i++) {
		inSV(SV[i]);
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