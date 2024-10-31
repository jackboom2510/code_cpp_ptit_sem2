// CPP0504.cpp - CẤU TRÚC SINH VIÊN
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

struct SinhVien {
	string name, id = "B20DCCN001", cl, date;
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
			if(word.size() < 2) res += "0";
			res+=word;
			count++;
		}
	}
	date = res;
}

void nhap(struct SinhVien &x) {
	getline(cin, x.name);
	cin >> x.cl >> x.date >> x.gpa;
	stdlize(x.date);
}

void in(struct SinhVien x) {
	cout << x.id << " " << x.name << " " << x.cl << " " << x.date << " " << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}