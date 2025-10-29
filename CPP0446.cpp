#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        } 
        int res = 2 * 1e6;
        for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (abs(a[i] + a[j]) < abs(res))
                res = a[i] + a[j];
        }
    }
        cout << res << "\n";
    }
    return 0;
}

