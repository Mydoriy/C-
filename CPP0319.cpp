#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
  
   
   int main (){
   	int m , s ;
   	cin >> m >> s ;
   	if(s == 0 && m > 1 || s > 9 * m){
   		cout << "-1 -1";
   		return 0;
   		}
   		if(s == 0 && m == 1){
   			cout << "0 0";
   			return 0;
   			}
   	int sum = s ;
   	string max = "";
   	for(ll i = 0 ; i < m ; i++){
   		ll digit = min(9,sum);
   		max += char('0' + digit);
   		sum -= digit;
   		}
   		sum = s;
   		string min(m , '0');
   		for(ll i = 0 ; i < m; i++){
   			for(ll k = 0 ;k <= 9; k++){
   				if(i == 0 && k == 0 && m > 1) continue;
   				if(sum - k >= 0 && sum - k <= 9 * (m - i -  1)){
   					min[i] = char('0' + k);
   					sum -= k;
   					break;
   					}
   					}
   					}
   					cout << min << " " << max ;
   					return 0 ;
   					}
