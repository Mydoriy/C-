#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
  
   int main(){
   	ll t ;
   	cin >> t;
   	while(t--){
   		ll n , m ; 
   		cin >> n >> m ;
   		vector<ll> a(n);
   		vector<ll> b(m);
   		vector<ll> word;
   		vector<ll> result;
   		for(ll i = 0 ; i < n ; i++){
   			cin >> a[i];
   			}
   			for(ll i = 0 ; i < m ;i++){
   				cin >> b[i];
   				}
   		for(auto c : a){
   			word.push_back(c);
   			}
   			for(auto d : b){
   				result.push_back(d);
   				}
   		word.insert(word.end() , result.begin() , result.end());
   		sort(word.begin(), word.end());
   		for(auto y : word){
   			cout << y << " ";
   			}
   			cout << endl;
   			}
   			}
   			
