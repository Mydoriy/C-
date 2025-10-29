#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ThiSinh {
    string hoten;
    string sinh;
    double diem1;
    double diem2;
    double diem3;
};

void nhap(ThiSinh &p) {
    getline(cin, p.hoten);
    getline(cin, p.sinh);
    cin >> p.diem1 >> p.diem2 >> p.diem3;
}

double tinh(ThiSinh &p) {
    return (p.diem1 + p.diem2 + p.diem3);
}

void in(ThiSinh p) {
    cout << p.hoten << " " << p.sinh << " ";
    cout << fixed << setprecision(1) << tinh(p) << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
