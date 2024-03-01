#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
	private:
		string mnv, ten, gioi, ns, dc, mst, nky;
	public:
		NhanVien();
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};
NhanVien::NhanVien(){
	this->ten="";
	this->gioi="";
	this->ns="";
	this->dc="";
	this->mst="";
	this->nky="";
}
istream& operator >> (istream& in, NhanVien &a){
	dem++;
	scanf("\n");
	a.mnv=to_string(dem);
	while(a.mnv.size()<=4){
		a.mnv="0"+a.mnv;
	}
	getline(in, a.ten);
	getline(in, a.gioi);
	getline(in, a.ns);
	getline(in, a.dc);
	getline(in, a.mst);
	getline(in, a.nky);
	return in;
}
ostream& operator << (ostream &out, NhanVien a){
	out<<a.mnv<<" " <<a.ten<<" "<<a.gioi<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nky<<endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
	
	

