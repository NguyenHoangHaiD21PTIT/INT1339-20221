#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
	private:
		string mnv, ten, gioi, dc, mst, nky;
	public:
		NhanVien();
		string ns;
		int ngay, thang, nam;
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
bool cmp(NhanVien a, NhanVien b){
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
	b.nam=(b.ns[6]-'0')*1000+(b.ns[7]-'0')*100+(b.ns[8]-'0')*10+(b.ns[9]-'0');
	a.thang=(a.ns[0]-'0')*10+(a.ns[1]-'0');
	b.thang=(b.ns[0]-'0')*10+(b.ns[1]-'0');
	a.ngay=(a.ns[3]-'0')*10+(a.ns[4]-'0');
	b.ngay=(b.ns[3]-'0')*10+(b.ns[4]-'0');
	if(a.nam!=b.nam){
		return (a.nam<b.nam);
	}
	if(a.thang!=b.thang){
		return (a.thang<b.thang);
	}
	return a.ngay<b.ngay;
}
void sapxep(NhanVien ds[], int n){
	sort(ds,ds+n,cmp);
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
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
	
	

