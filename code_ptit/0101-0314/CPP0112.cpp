#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		double ax, ay, bx, by;
		cin >> ax >> ay >> bx >> by;
		cout << fixed << setprecision(4) << sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by)) << endl;
	}
	
	return 0;
}