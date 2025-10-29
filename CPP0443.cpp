#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t ; 
    cin >> t ;
    while(t--){
        ll n ; 
        cin >> n ;
        set<ll> s;
        for(ll i = 0 ; i < n - 1 ; i++){
            ll x ; 
            cin >> x ;
                s.insert(x);
        }
        ll ans = 1;
        while(s.count(ans)){
            ans++;
        }
        cout << ans << endl;
    }
    return 0 ;
}

