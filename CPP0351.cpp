#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
   void chuanhoa(string &s){
   	if(!s.empty()){
   		s[0] = toupper(s[0]);
   		for(ll i = 1 ; i < s.size() ;i++){
   			s[i] = tolower(s[i]);
   			}
   			}
   			}
   			
   	int main (){
   	    ll t; 
   	    cin >> t ;
   	    cin.ignore();
   	    while(t--){
   	    	string a;
   	    	getline(cin,a);
   	    	stringstream ss(a);
   	    	vector<string> word ;
   	    	string token ;
   	    	while(ss >> token){
   	    		chuanhoa(token);
   	    		word.push_back(token);
   	    		}
   	    	ll n = word.size();
   	    	string last = word.back();
   	    		cout << last<< " ";
   	    	for(ll i = 0 ; i < n - 1 ; i++){
   	    		 chuanhoa(word[i]);
   	    		 cout << word[i];
   	    		 if(i != n - 2){
   	    		 	cout << " ";
   	    		 	}
   	    		 	}
   	    		 	cout << endl;
   	    		 	}
   	    		 	}
   	    		 	
   	    		
   	    	
