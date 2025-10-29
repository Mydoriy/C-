#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, a;
    getline(cin, s);    
    getline(cin, a);    

    stringstream ss(s);
    string word, result = "";

    while (ss >> word) {
        if (word != a) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }

    cout << result;
    return 0;
}

