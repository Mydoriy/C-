#include<bits/stdc++.h>
#define ll long long
using namespace std ;
 
  int main(){
  	ll t; 
  	cin >> t;
  	cin .ignore();
  	while(t--){
  		string s ;
  		getline(cin , s);
  		stringstream ss(s);
  		string token ;
  		vector<string> word;
  		while(ss >> token){
  			word.push_back(token);
  			}
  			reverse(word.begin() , word.end());
  			for(auto x : word){
  				cout << x << " ";
  				}
  				cout << endl;
  				}
  				}
