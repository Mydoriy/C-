#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
  
   int main(){
   	string s;
   	getline(cin,s);
   	vector<char> a;
	for(char c : s){
	if( c != ' '){
	 a.push_back(c);
	 }
	 }
	 vector<char> result ;
	 for(char b : a){
	 	if(b!='A'&&b!='a'&&b!='o'&&b!='O'&&b!='i'&&b!='I'&&b!='e'&&b!='E'&&b!='u'&&b!='U'&&b!='y'&&b!='Y'){
	 		result.push_back(b);
	 		}
	 		}
	 		for(ll i = 0 ; i < result.size();i++){
	 			result[i] = tolower(result[i]);
	 			cout << "." << result[i] ;
	 			}
	 			}
	 			
