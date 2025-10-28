#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  ll ucln(ll a , ll b){
  	while(b != 0){
  		ll temp = a % b ;
  		a = b ;
  		 b = temp ;
  		 }
  		 return a;
  		 }
    ll bcnn(ll a, ll b){
    	return (a/(ucln(a,b))*b);
    	}
    	
    	int main(){
    		ll t ;
    		cin >> t ;
    		while(t--){
    			ll n;
    			cin >> n;
    			ll x = 1;
    			for(ll i = 2 ; i <= n ;i++){
    				x = bcnn(x,i);
    			}
    			cout << x << endl;
    			}
    			}
    			
  		 
