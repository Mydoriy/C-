#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n + 1);            
        for (ll i = 1; i <= n; i++) {   
            cin >> a[i];
        }

        while (q--) {
            ll x, y;
            cin >> x >> y;
            ll sum = 0;
            for (ll i = x; i <= y; i++) {
                sum += a[i];
            }
            cout << sum << endl;  
        }
    }
    return 0;
}

