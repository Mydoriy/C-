#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
  int main(){
  	ll t ; 
  	cin >> t ;
  	while(t--){
  	
  		string s ;
  		cin >> s;
  			vector<ll> a(200,0);
  		for(ll i = 0 ; i < s.size() ; i++){
  			a[s[i]]++;
		  }
		  for(ll i = 0 ; i < s.size() ; i++){
  			if(a[s[i]] == 1){
  				cout << s[i];
  				a[s[i]] = 0;
			  } 
		  }
		  cout << endl;
	  }
  }
