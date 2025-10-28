#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 bool nguyento(ll n){
    if(n < 2) return 0;
    for(ll i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
 }
 bool tang(ll n){
    ll a = 10;
    while(n > 0){
        ll b = n % 10;
        if(b >= a){
            return 0;
        }
        a = b;
        n /= 10;
    }
    return 1;
 }
 bool giam(ll n){
    ll a = -1;
    while(n > 0){
        ll b = n % 10;
        if(b <= a){
            return 0;
        }
        a = b;
        n /= 10;
    }
    return 1;
 }

int main(){
    ll t ;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n;
        ll a = pow(10,n - 1);
        ll b = pow(10,n) - 1;
        ll x = 0;
        for(ll i = a ; i <= b; i++){
            if(nguyento(i)){
                if(tang(i) || giam(i)) x++;
            }
        }
        cout << x << endl;
    }
}
