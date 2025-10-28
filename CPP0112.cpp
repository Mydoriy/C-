#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 int main(){
 	ll t ;
 	cin >> t;
 	while(t--){
 	double a, b, c, d;
 	cin >> a >> b >> c >> d;
 	double p = sqrt((c - a) * (c - a) + (d - b) * (d - b));
 	cout <<fixed << setprecision(4)<< p << endl ;
 	}
 	return 0 ;
 	}
 	
