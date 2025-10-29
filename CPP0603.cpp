#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien {
    string lop, ten, msv, sinh;
    double gpa;

    string chuanhoatu(string s) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
            s[i] = tolower(s[i]);
        return s;
    }

    void chuan() {
        stringstream ss(ten);
        string token;
        vector<string> word;
        while (ss >> token) {
            token = chuanhoatu(token); 
            word.push_back(token);
        }
        ten = "";
        for (int i = 0; i < word.size(); i++) {
            if (i > 0) ten += " ";
            ten += word[i];
        }
    }

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
        chuan();
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

