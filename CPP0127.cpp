#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        bool found = false;
        for (int p = 2; p <= N; p++) {
            if (isPrime(p) && isPrime(N - p)) {
                cout << p << " " << N - p << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << "\n";
    }
    return 0;
}

