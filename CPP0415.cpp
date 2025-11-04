#include <iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

 	
int main() {
    int t;
    cin >> t; 
    while (t--) {
        ll n , m;
        cin >> n >> m ;
        vector<ll> a(n);
        for(ll i = 0 ; i < n ; i++){
        	cin >> a[i];
}
        vector<ll> b(m);
        for(ll i = 0 ; i < m ; i++){
        	cin >> b[i];
}
        ll x = LLONG_MIN;
        ll y = LLONG_MAX;
        for(ll i = 0 ;i < n ; i++){
        	x = max(x , a[i]);
        	}
        for(ll i = 0 ; i < m ;i ++){
        	y = min(y, b[i]);
        	}
        	cout << (ll)x * y << endl;
        	}
}



