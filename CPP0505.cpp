#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
  struct NhanVien{
  	string mnv, ten, tinh , sinh, diachi , mthue, ki;
  };
  void nhap(NhanVien &p){
  	getline(cin, p.ten);
    getline(cin,p.tinh);
	getline(cin,p.sinh);
	getline(cin,p.diachi);
	getline(cin,p.mthue);
	getline(cin,p.ki);
	}
	void chuanhoa(string &s){
	  if(s[1] == '/') s.insert(0,"0");
	  if(s[4] == '/') s.insert(3,"0");
	  }
	  void in(NhanVien &p){
	  	p.mnv = "00001";
	  	chuanhoa(p.sinh);
	  	chuanhoa(p.ki);
	  	cout << p.mnv << " ";
	  	cout << p.ten << " " << p.tinh << " " << p.sinh<< " " << p.diachi << " " ;
	  	cout << p.mthue << " " << p.ki << endl;
	  	}
  
  int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
