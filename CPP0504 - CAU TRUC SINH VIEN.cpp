#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma="B20DCCN001";
	string ten;
	string lop;
	string ns;
	float gpa;
};
void nhap(SinhVien &a){
	getline(cin, a.ten);
	cin>>a.lop;
	cin>>a.ns;
	cin>>a.gpa;
}
void in(SinhVien a){
    if(a.ns[1]=='/'){
		a.ns="0"+a.ns;
	} 
    if(a.ns[4]=='/'){
		a.ns.insert(3,"0");
	}
	cout <<a.ma<<" "<<a.ten<<" "<<a.lop<<" ";
	//chuan: 12/12/2012, k chuan 1: 2/x/2012(Ki tu chi so 1 la dau /, chuan phai la 1 so)
	//k chuan 2: 20/3/2012(ki tu thu 4 la dau /...)
	cout<<a.ns <<" ";
	cout <<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
