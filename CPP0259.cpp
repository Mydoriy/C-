#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll m, n, p;
    cin >> m >> n >> p;
    vector<vector<ll>> a(m, vector<ll>(n));
    vector<vector<ll>> b(n, vector<ll>(p));
    vector<vector<ll>> c(m, vector<ll>(p, 0)); 

    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }

    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < p; j++) {
            for (ll k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n"; 
    }

    return 0;
}

