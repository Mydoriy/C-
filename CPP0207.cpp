#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
    int main(){
    	ll t ;
    	cin >> t ;
		while(t--){
			ll n , d; 
			cin >> n >> d ;
			vector<ll> a(n);
			for(ll i = 0 ; i < n ; i++){
				cin >> a[i];
				}
				d %= n;
			vector<ll> temp(d);
			for(ll i = 0 ; i < d ; i++){
				temp[i]= a[i];
				}
				for(ll i = d ; i < n ; i++){
					a[i - d] = a[i];
					}
					for(ll i = 0 ; i < d ; i++){
						a[n - d + i]= temp[i];
						}
						for(ll i = 0 ; i < n ; i++){
							cout << a[i] << (i == n - 1 ? '\n' : ' ');
							}
							}
							}
							
			
