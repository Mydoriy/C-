#include<bits/stdc++.h>
#define ll long long
using namespace std;

    int main(){
    	ll t ;
    	cin >> t ;
    	while(t--){
    		ll n ;
    		cin >>n ;
    		for(ll i = 2 ; i * i <= n ;i++){
    			ll x = 0 ;
    			    while(n % i == 0){
    			    x++;
    			    n /= i;
    			    	}
    			    if(x > 0){
    			    	cout << i <<" "<< x << " " ;
    			    	}
    			    }
    			    if(n > 1){
    			    	cout << n << " 1";
    			    	}
    			    	cout << endl ;
    			    }
    			}
    		
    			    
    			    
    			    	
    		
