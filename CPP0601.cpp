#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string lop, ten, msv, sinh;
    double gpa;

    void chuanhoa() {
        if (sinh[1] == '/') sinh.insert(0, "0");
        if (sinh[4] == '/') sinh.insert(3, "0");
    }

    void nhap() {
        getline(cin, ten);
        getline(cin, msv);
        getline(cin, sinh);
        cin >> gpa;
    }

    void xuat() {
        lop = "B20DCCN001";
        chuanhoa();
        cout << lop << " "
             << ten << " "
             << msv << " "
             << sinh << " "
             << fixed << setprecision(2) << gpa;
    }
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

