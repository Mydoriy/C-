#include <bits/stdc++.h>
using namespace std;

int main() {
    long long fib[93];
    fib[1] = fib[2] = 1;
    for (int i = 3; i <= 92; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << fib[n] << "\n";
    }

    return 0;
}

