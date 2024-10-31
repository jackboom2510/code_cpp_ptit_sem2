// CPP0501.cpp - CẤU TRÚC ĐIỂM
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

void input(struct Point &p) {
    cin >> p.x >> p.y;
}

double distance(struct Point a, struct Point b) {
    double res = (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
    return sqrt(res);
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}