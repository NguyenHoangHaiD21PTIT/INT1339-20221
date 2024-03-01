#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string manv;//ma nhan vien
    string ten;
    string gioi;
    string ns;//ngay sinh
    string dc;//dia chi
    string ms;//ma so thue
    string ngayky;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin>>a.gioi>>a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin>>a.ms>>a.ngayky;
}
void inds(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].manv=to_string(i+1);
		int k= 5 - ds[i].manv.size();
		while(k--){
			cout<<"0";
		}
		cout<<ds[i].manv<<" ";
		cout <<ds[i].ten<<" "<<ds[i].gioi<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].ms<<" "<<ds[i].ngayky;
	    cout <<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
