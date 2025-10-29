#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
  
   int n , k , a[100] , ok ;
   void ktao(){
   	for(ll i = 1 ; i <= n ; i++){
   		a[i] = 0;
   		}
   		}
    void sinh(){
    	ll i = n ;
    	while(i >= 1 && a[i] == 1){
    		a[i] = 0 ;
    		i--;
    		}
    		if(i == 0){
    			ok = 0 ;
    			}
    			else{
    				a[i] = 1;
				}
				}
	int main(){
		ll t ;
		cin >> t;
		while(t--){
		cin >> n ;
		ok = 1;
		ktao();
		while(ok){
			for(ll i = 1 ; i <= n ; i++){
				cout << a[i] ;
				}
				cout << " ";
				sinh();
				}
				cout << endl;
				}
				return 0;
				}
		 
