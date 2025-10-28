#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
 bool kiemtra(ll n){
 	ll x = n % 10 ;
 	n /= 10 ;
 	while(n > 0){
 		ll m = n % 10 ;
 		if(abs(m - x) != 1){
 			return 0 ;
 			}
 			x = m ;
 			n /= 10;
 			}
 			return 1 ;
 			}
 			
 	 int main(){
 	 	ll t ;
 	 	cin >> t ;
 	 	while(t--){
 	 		ll n ; 
 	 		cin >> n ;
 	 		if(kiemtra(n)){
 	 			cout << "YES" << endl ;
 	 			}
 	 			else{
 	 				cout << "NO" << endl ;
				  }
				  }
				  }
