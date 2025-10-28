#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  bool kiemtra(int n){
  	if(n < 2){
  		return 0;
  		}
  	for(int
	   i = 2 ; i * i <= n ; i++){
  		if(n % i == 0){
  			return 0;
  			}
  			}
  			return 1;
  			}
  		
  		int main(){
  			ll a , b;
  			cin >> a >> b ;
  			if(a > b){
  				swap(a,b);
  				}
  			for(ll i = a ; i <= b; i++){
  				if(kiemtra(i)){
  					cout << i << " " ;
  					}
  					}
  					}
  					
  			
