#include <bits/stdc++.h>
#define ll long long
using namespace std;

    int main(){
    	ll t ;
    	cin >> t ;
    	while(t--){
    		ll n ;
    		cin >> n ;
    		vector<ll> a(n);
    		for(ll i = 0 ; i < n ; i++){
    			cin >> a[i];
    			}
    		sort(a.begin(), a.end());
    		ll x = LLONG_MAX;
    		for(ll i = 1 ; i < n ; i++){
    			x = min(x , a[i] - a[i - 1]);
    			}
    			cout << x << endl;
    			}
    			}
    		
