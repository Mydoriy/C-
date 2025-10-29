#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){
    ll t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        ll c = 0 ;
        for(ll i = 0 ; i < s.size(); i++){
            for(ll j = i ; j < s.size(); j++){
                if(s[i] == s[j]){
                    c ++;
                }
            }
        }
        cout << c << endl;
    }
}
