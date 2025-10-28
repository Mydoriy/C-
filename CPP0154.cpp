#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  int main(){
  	ll t ;
  	cin >> t;
  	while(t--){
  		ll m , n ;
  		cin >> m >> n ;
  		ll sum = 0;
  		for(ll i = 1 ; i <= m ; i++){
  			ll a = i % n;
  			sum += a;
  			}
  			if(sum == n){
  				cout << 1 << endl ;
  			}
  			else{
  				cout << 0 << endl ;
			  }
  			}
  			}
  			
  		
  		
