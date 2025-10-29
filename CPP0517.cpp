#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ten, gt, ns, dc, mst, nkhd;
};

void nhap(NhanVien &a) {
    if (cin.peek() == '\n') cin.ignore();
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.nkhd);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << setw(5) << setfill('0') << i + 1 << " ";
        cout << ds[i].ten << " "
             << ds[i].gt << " "
             << ds[i].ns << " "
             << ds[i].dc << " "
             << ds[i].mst << " "
             << ds[i].nkhd << "\n";
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}

