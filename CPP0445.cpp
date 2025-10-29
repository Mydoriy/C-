#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
  
  int main(){
  	ll t ;
  	cin >> t ;
  	while(t--){
  		ll n ;
  		cin >> n ;
  		vector<ll> a(n);
  		for(ll i = 0 ; i < n ; i++){
  			cin >> a[i];
  			}
  	sort(a.begin(), a.end());
  	vector<ll> word;
  	for(auto c : a){
  		word.push_back(c);
  		}
  		bool found = false ;
  		for(ll i = 0 ;i < word.size() - 1 ; i++){
  			if(word[i] != word[i + 1]){
  				cout << word[0] << " " << word[1];
  				found = true ;
  				break;
  			}
  			}
  			if(!found) cout << "-1" ;
  			cout << endl;
  			}
  			}
  			
  		
  			
  		
  		
  		
  	
