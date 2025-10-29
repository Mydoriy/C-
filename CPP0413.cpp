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
  		for(ll i = 0; i < n ; i++){
  			cin >> a[i];
  			}
  			sort(a.begin(), a.end());
  			ll i = 0 ;
  			ll j = n - 1;
  			while(i <= j){
  				if(i != j){
  					cout << a[j] << " ";
  					cout << a[i] << " ";
  					}
  					else{
  						cout << a[i] << " ";
					  }
					  i++;
					  j--;
					  }
					  cout << endl;
					  }
					  }
					  
