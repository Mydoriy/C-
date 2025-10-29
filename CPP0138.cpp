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
  			bool found = false;
  			for(ll i = 2 ; i <= n ; i++){
  				if(kiemtra(i) && kiemtra(n - i)){
  					cout << i << " " << n - i ;
  					found = true ;
  					break;
  					}
  					}
  					if(!found){
  						cout <<""<< endl;
						  } 
  					cout << endl;
  					}
  					}
  					
