#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll t;
    cin >> t;
    while (t--) {
        ll n , k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found = false ;
        for(ll i = 0 ; i < n ;i++){
        	if(a[i] == k){
        		cout << count(a.begin(), a.end(), a[i]);
        		found = true ;
        		break;
        		}
        		}
        		if(!found) cout << "-1";
        		cout << endl;
        		}
        		}
        		
