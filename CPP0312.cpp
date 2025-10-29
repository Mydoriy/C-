#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  int main(){
    ll t ; 
    cin >> t ;
    while(t--){
        string s ;
        ll k ; 
        cin >> s >> k;
        vector<ll> a(200,0);
        for(ll i = 0 ; i < s.size() ; i++){
            a[s[i]]++;
        }
        ll x = 0 ;
        for(ll i = 0 ; i < s.size() ; i++){
            if(a[s[i]] > 0){
                x++;
                a[s[i]] = 0;
            }
        }
        if(s.size() < 26){
            cout << 0 << endl;
        }
        else if(s.size() >= 26){
            if(k + x >= 26){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
  }
  
