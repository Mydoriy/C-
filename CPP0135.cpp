#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  bool kiemtra(ll n){
  	if(n < 2){
  		return 0;
  		}
  	for(ll i = 2 ; i * i <= n ; i++){
  		if(n % i == 0){
  			return 0;
  			}
  			}
  			return 1;
  			}
  		
  		int main(){
  			ll t; 
  			cin >> t;
  			while(t--){
  			ll n ;
  			cin >> n ;
  			for(ll i = 1 ; i * i <= n ; i++){
  				if(kiemtra(i)){
  					cout << i * i << " ";
  					}
  					}
  					cout << endl ;
  					}
  					}
  			


