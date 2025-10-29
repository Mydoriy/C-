#include <bits/stdc++.h>
using namespace std;

bool tn(const string &n) {
    int x = 0;
    int y = n.size() - 1;
    while (x <= y) {
        if (n[x] != n[y]) return false;        
        if ((n[x] - '0') % 2 != 0) return false; 
        if ((n[y] - '0') % 2 != 0) return false;
        x++;
        y--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (tn(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

