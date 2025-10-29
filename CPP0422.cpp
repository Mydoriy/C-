#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

 
 int main(){
    int t;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0 ; i < n ;i++){
            cin >> a[i];
        }
        vector<ll> word;
        vector<ll> result;
        for(auto x : a){
            if(x != 0){
                word.push_back(x);
            }
            else{
                result.push_back(x);
            }
        }
    word.insert(word.end(), result.begin(), result.end());
    for(auto y : word){
        cout << y << " ";
    }
    cout << endl;
    }
 }
