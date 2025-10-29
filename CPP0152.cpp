#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  int main(){
  	ll t ;
  	cin >> t;
  	while(t--){
  		ll m , n ;
  		cin >> m >> n ;
  		ll min = -1 ;
  		for(ll i = 0 ; i <= n - 1 ; i++){
  		if((i * m) % (n) == 1){
  			min = i;
  			break;
  			}
			  }
			  cout << min << endl;
			  }
			  }
  		
