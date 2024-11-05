#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct NhanVien {
	string maSo;
	string hoTen;
	float heSoLuong;
	float luongCoBan;
	float phuCap;
};

void nhapThongTinNhanVien(vector<NhanVien> &dsNhanVien) {
	for (int i = 0; i < 10; i++) {
		NhanVien nv;
		cout << "Nhap thong tin nhan vien " << i + 1 << ":\n";
		cout << "Ma so: "; cin >> nv.maSo;
		cin.ignore();
		cout << "Ho ten: "; getline(cin, nv.hoTen);
		cout << "He so luong: "; cin >> nv.heSoLuong;
		cout << "Luong co ban: "; cin >> nv.luongCoBan;
		cout << "Phu cap: "; cin >> nv.phuCap;
		dsNhanVien.push_back(nv);
	}
}

void input(const vector<NhanVien> &dsNhanVien, const string &ten) {
	ofstream file(ten);
	if (file.is_open()) {
		for (const auto &nv : dsNhanVien) {
			file << nv.maSo << "\n" << nv.hoTen << "\n"
				 << nv.heSoLuong << "\n" << nv.luongCoBan << "\n" << nv.phuCap << "\n";
		}
		file.close();
	}
}

void output(vector<NhanVien> &dsNhanVien, const string &ten) {
	ifstream file(ten);
	if (file.is_open()) {
		NhanVien nv;
		while (file >> nv.maSo) {
			file.ignore();
			getline(file, nv.hoTen);
			file >> nv.heSoLuong >> nv.luongCoBan >> nv.phuCap;
			dsNhanVien.push_back(nv);
		}
		file.close();
}
}

void tinhVaInTongLuong(const vector<NhanVien> &dsNhanVien) {
	for (const auto &nv : dsNhanVien) {
		float tongLuong = nv.luongCoBan * nv.heSoLuong + nv.phuCap;
		cout << "Ma so: " << nv.maSo << ", Ho ten: " << nv.hoTen 
			 << ", Tong luong: " << tongLuong << endl;
	}
}

int main() {
	vector<NhanVien> dsNhanVien;
	string ten = "file.txt";
	nhapThongTinNhanVien(dsNhanVien);
	input(dsNhanVien, ten);
	dsNhanVien.clear();
	output(dsNhanVien, ten);
	tinhVaInTongLuong(dsNhanVien);

	return 0;
}
