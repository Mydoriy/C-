#include<bits/stdc++.h>
#define ll long long
using namespace std;

 bool kiemtra(ll n){
 	ll last = n % 100 ;
 	if(last != 86){
 		return 0 ;
 		}
 		return 1 ;
 		}
 		
 		int main(){
 			ll t ;
 			cin >> t;
 			while(t--){
 				ll n ;
 				cin >> n;
 				if(kiemtra(n)){
 					cout << 1 << endl;
				}
				else{
					cout<< 0 << endl;
				}
				}
				return 0;
				}
