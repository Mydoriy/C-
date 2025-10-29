#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  
  int main(){
  	int t ;
  	cin >> t ;
  	while(t--){
  		ll n ;
  		cin >> n ;
  		vector<ll> a(n);
  		vector<ll> word ;
  		for(ll i = 0 ; i < n ;i++){
  			cin >> a[i];
  			}
  	    set<ll> s(a.begin(), a.end());
  	    vector<ll> result;
  	    for(auto y : s){
  	    	result.push_back(y);
  	    	}
  	    ll x = 0;
  	    for(ll i = 1 ; i < result.size()  ; i++){
  	    		x += result[i] - result[i - 1] - 1;
  	    		}
  	    		cout << x << endl;
  	    		}
  	    		}
  	    	
