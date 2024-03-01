#include<bits/stdc++.h>
using namespace std;
int dem=0;
class SinhVien{
	private:
		string ma, ten, lop, ns;
		float gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
		void chuanngay();
		void chuanten();
};
SinhVien::SinhVien(){
	this->ma="B20DCCN0";
	this->ten="";
	this->lop="";
	this->ns="";
	this->gpa=0;
}
istream& operator >> (istream& in, SinhVien &a){
	dem++;
	cin.ignore();
	if(dem<10){
		a.ma=a.ma+"0"+to_string(dem);
	} else {
		a.ma=a.ma+to_string(dem);
	}
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
	out<<endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
