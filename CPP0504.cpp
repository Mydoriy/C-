#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
 
   struct SinhVien{
   	string msv, ten , lop ,sinh;
   	double gpa ;
   };
    void nhap(SinhVien &p){
    getline(cin,p.ten);
    getline(cin,p.lop);
    getline(cin,p.sinh);
    cin >> p.gpa;
    }
    void chuanhoa(string &s){
    	if(s[1] == '/') s.insert(0,"0");
    	if(s[4] == '/') s.insert(3,"0");
    	}
    	void in(SinhVien &p){
    		p.msv = "B20DCCN001";
    		chuanhoa(p.sinh);
    		cout << p.msv<< " ";
    		cout<< p.ten << " ";
    		cout << p.lop << " ";
    		cout << p.sinh << " ";
    		cout << fixed << setprecision(2) << p.gpa<< endl;
    		}
    	
  
   int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
