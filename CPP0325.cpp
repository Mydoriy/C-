#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;          
        ll x = 0, y = 0, a = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int c = s[i] - '0';
            x++;
            if (x % 2 == 0) {
                y += c;    
            } else {
                a += c;    
            }
        }
        if (abs(y - a) % 11 == 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}

