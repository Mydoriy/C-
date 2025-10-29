#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    set<string> st; 

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); 
        st.insert(s);    
    }

    cout << st.size(); 
    return 0;
}

