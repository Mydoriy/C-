#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
 
  struct PhanSo{
  	ll a, b;
  };
  void nhap(PhanSo &p){
  	cin >> p.a >> p.b;
  	}
   void in(PhanSo &p){
   	cout << p.a << "/"<< p.b;
   	}
   	void rutgon(PhanSo &p){
   		ll u = __gcd(p.a , p.b);
   		p.a /= u;
   		p.b /= u;
   		}
   PhanSo tong( PhanSo &p,PhanSo &q) {
    PhanSo kq;
    kq.a = p.a * q.b + q.a * p.b;
    kq.b = p.b * q.b;
    rutgon(kq);
    return kq;
}
	
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
