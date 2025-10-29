#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
  struct PhanSo{
  	ll a , b;
  };
   void nhap(PhanSo &p){
   	cin >> p.a >> p.b;
   }
   void in(PhanSo &p){
   	cout << p.a << "/"<< p.b;
   }
   void rutgon(PhanSo &p){
   	ll u = __gcd(p.a, p.b);
   	p.a /= u;
   	p.b /= u;
   }
   int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
