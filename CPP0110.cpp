#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
 int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        s.replace(s.find("084"), 3, ""); 
        cout << s << "\n";
    }
    return 0;
}

