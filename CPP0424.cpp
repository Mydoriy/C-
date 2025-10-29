#include<bits/stdc++.h>
#define ll long long 
using namespace std ;


    int main(){
    	int t ;
    	cin >> t;
    	while(t--){
    		ll n , m ; 
    		cin >> n >> m ;
    		vector<vector<ll>> a(n, vector<ll> (m));
    		for(ll i = 0 ; i < n ;i++){
    			for(ll j = 0 ; j < m ; j++){
    				cin >> a[i][j];
    				}
    				}
    				vector<ll> word;
    				for(auto &x : a){
    					for( auto z : x){
    					word.push_back(z);
    					}
    					}
    				
    					sort(word.begin() , word.end());
    					for(auto y : word){
    						cout << y << " ";
    						}
    						cout << endl;
    						}
    						}
    						
