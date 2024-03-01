#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
		void chuanhoa();
};
SinhVien::SinhVien(){
	this->ma="B20DCCN001";
	this->ten="";
	this->lop="";
	this->ns="";
	this->gpa=0;
}
istream& operator >> (istream& in, SinhVien &a){
	getline(in, a.ten);
	getline(in, a.lop);
	getline(in, a.ns);
	in>>a.gpa;
	return in;
}
void SinhVien::chuanhoa(){
	if(ns[1]=='/'){
		ns="0"+ns;
	}
	if(ns[4]=='/'){
		ns.insert(3,"0");
	}
}
ostream& operator << (ostream &out, SinhVien a){
	a.chuanhoa();
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
