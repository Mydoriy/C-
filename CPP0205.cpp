#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

  int main(){
  	ll t ;
  	cin >> t; 
  	while(t--){
  		ll n ;
  		cin >> n ;
  		vector<ll> a(n);
  		for(ll i = 0 ; i < n ; i++){
  			cin >> a[i];
  			}
  			ll min = LLONG_MIN ;
  			for(ll i = 0 ; i < n ; i++){
  				min = max(min , a[i]);
  				}
  				cout << min << endl ;
  				}
  				}
  				
  			
  		
