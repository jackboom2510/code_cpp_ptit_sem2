#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct NhanVien {
	string msnv;
	string hoten;
	double hs;
	int kcb;
	int pc;
};

void nhap(NhanVien &nv) {
	cin >> nv.msnv;
	getchar();
	getline(cin, nv.hoten);
	cin >> nv.hs >> nv.kcb >> nv.pc;
}

int main() {
	int soNhanVien; cin >> soNhanVien;
	NhanVien NV[soNhanVien];
	for(int i = 0; i < soNhanVien; i++)
		nhap(NV[i]);
	fstream outfile("input.txt");
	if (outfile) {
		for (int i = 0; i < soNhanVien; i++) {
			outfile << NV[i].msnv << "," << NV[i].hoten << "," << NV[i].hs << "," << NV[i].kcb << "," << NV[i].pc << endl;
		}
	}
	fstream infile("output.txt");
	string line;
	if(infile) {
		while(getline(outfile, line))
			infile << line << endl;
	}
	while(getline(infile, line)) {
		stringstream ss(line);
		NhanVien nv;
		string temp;
		getline(ss, nv.msnv, ',');
		getline(ss, nv.hoten, ',');
		getline(ss, temp, ',');
		nv.hs = stod(temp);
		getline(ss, temp, ',');
		nv.kcb = stoi(temp);
		getline(ss, temp, ',');
		nv.pc = stoi(temp);
		double total_salary = nv.kcb * nv.hs + nv.pc;
		cout << "Mã NV: " << nv.msnv << ", Họ tên: " << nv.hoten << ", Tổng lương: " << total_salary << endl;
	}
	outfile.close();
	infile.close();

	return 0;
}
