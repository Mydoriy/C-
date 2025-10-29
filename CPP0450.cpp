#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> s(n,vector<ll>(m));
        for(ll i = 0 ; i < n ; i++){
        	for(ll j = 0 ; j < m ; j++){
        	cin >> s[i][j];
			}
			}
        map<ll,ll> frep;
        vector<ll> order;
        for(ll i = 0 ; i < n ; i++){
        	for(ll j = 0 ; j < m ; j++){
            ll x = s[i][j];
        	frep[x]++;
        	if(frep[x] == 1) order.push_back(x);
        	}
        	}
        for(auto x : order){
        	cout << x << " " << frep[x] << endl;
        	}
        	cout << endl;
        	}
        	}
        	
