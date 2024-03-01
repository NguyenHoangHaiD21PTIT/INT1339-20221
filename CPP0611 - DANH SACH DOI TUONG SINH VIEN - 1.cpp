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
		void chuanhoa();
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
