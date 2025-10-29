#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

  int main(){
  	ll t; 
  	cin >> t ;
  	while(t--){
  		ll n , k ;
  		cin >> n >> k ;
  		vector<ll> a(n);
  		for(ll i = 0 ; i< n ; i++){
  			cin >> a[i];
  			}
  			sort(a.begin(), a.end());
  			for(ll i = 0 ; i < n ; i++){
  				if(k == i){
  					cout << a[i - 1] ;
  					}
  					}
  				cout << endl ;
  				}
  				}
  				
