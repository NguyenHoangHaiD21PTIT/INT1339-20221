#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv, ten, gioi, ns, dc, mst, nky;
	public:
		NhanVien();
		void nhap();
		void xuat();
};
NhanVien::NhanVien(){
	this->mnv="00001";
	this->ten="";
	this->gioi="";
	this->ns="";
	this->dc="";
	this->mst="";
	this->nky="";
}
void NhanVien::nhap(){
	getline(cin, ten);
	getline(cin, gioi);
	getline(cin, ns);
	getline(cin, dc);
	getline(cin, mst);
	getline(cin, nky);
}
void NhanVien::xuat(){
	cout<<mnv<<" "<<ten<<" "<<gioi<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<nky;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
	
	
	
