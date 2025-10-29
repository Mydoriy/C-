#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ll t ;
	cin >> t;
	while(t--){
		ll n ;
		cin >> n ;
		vector<ll> a(n);
		vector<ll> c(n , 0);
		for(ll i = 0 ; i < n ;i++){
			cin >> a[i];
			}
	
			ll sum = 0;
		for(ll i = 0 ; i < n; i++){
			if(c[i] == 0){
				ll x = 0;
				for(ll j = i ; j < n ; j++){
					if(a[i] == a[j]){
						x++;
						c[j] = 1;
					}
				}
			if(x > 1){
				sum += x;
			}
		}
		}
		cout << sum << endl;
	}
}

		
