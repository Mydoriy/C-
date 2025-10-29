#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

 
   int main(){
   	ll t ;
   	cin >> t;
   	cin.ignore();
   	while(t--){
   		string s ;
   		getline(cin,s);
   		stringstream ss(s);
   		vector<ll> a;
   		ll x;
   		while(ss >> x){
   			a.push_back(x);
   			}
   			ll n = a.size();
   			ll odd = 0;
   			ll les = 0;
   			for( char num : a){ 
   				if(num % 2 == 0) odd++;
   				else{
   					les++;
				   }
				   }
		if(n % 2 == 0 && odd > les || n % 2 == 1 && les > odd) {
			cout << "YES\n";
			}
        else{
        	cout << "NO\n";
		}
		}
		}
	
		
