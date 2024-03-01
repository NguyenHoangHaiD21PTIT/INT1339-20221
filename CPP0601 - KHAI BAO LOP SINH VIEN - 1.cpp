#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma, ten, ns, lop;
		double gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();
		void chuanhoa();
};
SinhVien::SinhVien(){//constructor
	this->ma="B20DCCN001";
	this->ten="";
	this->ns="";
	this->lop="";
	this->gpa=0;
}
void SinhVien::nhap(){
	getline(cin, ten);
	getline(cin, lop);
	getline(cin, ns);
	cin>>gpa;
}
void SinhVien::chuanhoa(){
	if(ns[1]=='/'){
		ns="0"+ns;
	}
	if(ns[4]=='/'){
		ns.insert(3,"0");
	}
}
void SinhVien::xuat(){
	chuanhoa();
	cout<<ma<<" "<<ten<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
