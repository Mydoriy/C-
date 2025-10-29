#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t ; 
	cin >> t ;
	set<ll> s ;
	for(ll i = 0 ; i < t ;i++){
		ll n ;
		cin >> n ;
		s.insert(n);
		}
		for(ll n : s){
			cout << n << " ";
			}
			}
