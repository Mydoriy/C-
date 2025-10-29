#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  
  int main(){
  	ll t ;
  	cin >> t ;
  	while(t--){
  		ll n , m ;
  		cin >> n >> m ;
  		vector<ll> a(n);
  		for(ll i = 0 ; i < n ; i++){
  			cin >> a[i];
  			}
  		for(ll i = 0 ; i < n ; i++){
  			if(a[i] == m) {
  				cout << i + 1;
  				break;
  				}
  				}
  				cout << endl;
  				}
  				}
  				
  				
