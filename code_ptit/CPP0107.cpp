#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class deKT {
public:
	int maDe;
	string dapAn;
	void setDapAn(string s) {
		dapAn = s;
	}
};

int main() {
	deKT de101, de102;
	de101.maDe = 101; de102.maDe = 102;
	de101.setDapAn("ABBADCCABDCCABD");
	de102.setDapAn("ACCABCDDBBCDDBB");
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		long long md;
		cin >> md;
		deKT de;
		switch(md) {
			case 101:
				de.dapAn = de101.dapAn;
				break;
			case 102:
				de.dapAn = de102.dapAn;
				break;
		}
		int soCauDung = 0;
		for(int i = 0; i < 15; i++) {
			char c;
			cin >> c;
			if(c == de.dapAn[i]) soCauDung += 1;
		}
		cout << fixed << setprecision(2) << (float)soCauDung/15*10 << endl;
	}
	return 0;
}	