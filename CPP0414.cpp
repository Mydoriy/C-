#include<bits/stdc++.h>
#define ll long long 
using namespace std ; 
 

   int main(){
    ll t ;
    cin >> t;
    while(t--){
        ll n ;
        cin >> n ;
        set<ll> s;
        for(ll i = 0 ; i < n ; i++){
            ll x ;
            cin >> x;
            if(x == 0) s.insert(0);
            while(x > 0){
                s.insert(x % 10);
                x /= 10;
                }
            }
            for(ll x : s){
                cout << x << " ";
            }
            cout << endl;
        }
    }

