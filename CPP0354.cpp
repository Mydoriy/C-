#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
  
  int main(){
  	ll t;
  	cin >> t ;
  	cin.ignore();
  	while(t--){
  		string s ;
  		getline(cin,s);
  		ll count = 1;
  		for(ll i = 1 ; i <= s.size(); i++){
  			if(s[i]==s[ i - 1]){
  				count++;
  				}
  				else{
  				cout << s[i - 1] << count ;
				  count = 1;	
				  }
  		}
  		cout << endl;
  		}
  		}
