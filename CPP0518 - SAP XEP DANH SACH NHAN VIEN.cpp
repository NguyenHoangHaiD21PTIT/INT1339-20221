#include<bits/stdc++.h>
using namespace std;
//1. Khoi tao
struct NhanVien{
    string ma;
    string ten;
    string gioi;
    string ns;//ngaysinh
    string dc;//diachi
    string ms;//maso
    string ngayky;
    int ngay, thang, nam;
};
//2. Nhap
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin>>a.gioi>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.ms>>a.ngayky;
}
//3. Chuan hoa
void chuanhoa(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].ma=to_string(i+1);
		while(ds[i].ma.size()<=4){
			ds[i].ma="0"+ds[i].ma;
		}
	}
}
//4. Sap xep
bool cmp(NhanVien a, NhanVien b){
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
	b.nam=(b.ns[6]-'0')*1000+(b.ns[7]-'0')*100+(b.ns[8]-'0')*10+(b.ns[9]-'0');
	a.ngay=(a.ns[3]-'0')*10+(a.ns[4]-'0');
	b.ngay=(b.ns[3]-'0')*10+(b.ns[4]-'0');
	a.thang=(a.ns[0]-'0')*10+(a.ns[1]-'0');
	b.thang=(b.ns[0]-'0')*10+(b.ns[1]-'0');
	if(a.nam!=b.nam){
		return (a.nam<b.nam);
	}
	if(a.thang!=b.thang){
		return (a.thang<b.thang);
	}
	return a.ngay<b.ngay;
}
void sapxep(NhanVien ds[], int n){
	chuanhoa(ds,n);
	sort(ds,ds+n,cmp);
}
//5. In
void inds(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].gioi<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].ms<<" "<<ds[i].ngayky<<endl;
    }
}
//6. Ham main
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
