#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

  bool chia5(const string &s){
    ll res = 0 ;
    for(char c : s){
        ll bit = c - '0';
        res = (res * 2 + bit) % 5;
    }
    return res == 0;
  }

   int main(){
    ll t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(chia5(s)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
   }
