#include <bits/stdc++.h>
using namespace std; 
#define ll long long  

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;  
        ll x = 0;
        for(ll i = 2; i * i <= n; i++){
            while(n % i == 0){
                x = i;   
                n /= i;
            }
        }
        if(n > 1){
		 x = n;  
		 }
        cout << x << "\n";
    }
    return 0;
}

