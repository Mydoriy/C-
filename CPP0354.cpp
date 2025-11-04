#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main (){
    ll t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        map<char, ll> freq;
        for (auto c : s) {
            freq[c]++;
        }

        set<char> printed;
        for (auto c : s) {
            if (printed.count(c) == 0) {//kiểm tra xem kí tự c chưa in lần nào.
                cout << c << freq[c];
                printed.insert(c);
            }
        }

        cout << endl;
    }
}
