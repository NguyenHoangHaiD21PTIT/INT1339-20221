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
		void chuanten();
		void chuanngay();
};
SinhVien::SinhVien(){
	this->ma="B20DCNN001";
	this->ten="";
	this->lop="";
	this->ns="";
	this->gpa=0;
}
istream& operator >> (istream &in, SinhVien &a){
	getline(in, a.ten);
	getline(in, a.lop);
	getline(in, a.ns);
	in>>a.gpa;
	return in;
}
void SinhVien::chuanngay(){
	if(ns[1]=='/'){
		ns="0"+ns;
	}
	if(ns[4]=='/'){
		ns.insert(3,"0");
	}
}
void chuanhoa1(string &s){//Chuan hoa 1 tu trong ten(VD: hOa ->Hoa)
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
void SinhVien::chuanten(){
	stringstream s2(ten);
	string token;
	vector<string>v;
	while(s2>>token){
		v.push_back(token);
	}
	for(int i=0;i<v.size();i++){
		chuanhoa1(v[i]);
		cout<<v[i]<<" ";
	}	
}
ostream& operator << (ostream &out, SinhVien a){
	a.chuanngay();
	out<<a.ma<<" ";
	a.chuanten();
	out<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
