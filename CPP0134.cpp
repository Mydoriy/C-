#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k ;
		ll x = 0 ; 
		ll y = -1 ;
		for(ll i = 2 ; i * i <= n ; i++){
			while(n % i == 0){
				x++;
				if(x == k){
					y = i ;
					}
					n /= i;
				}
				}
		if(n > 1){
			x++;
			if(x == k){
				y = n ;
				}
				}
				cout << y << endl ;
				}
				}
		
   
        

