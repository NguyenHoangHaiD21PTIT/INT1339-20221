#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int stt;
    string msv, ten, lop, email, dn;
};
bool cmp(SinhVien &a, SinhVien &b){
	return a.ten<b.ten;
}
int main(){
	int n;//So luong trong ds sv
	cin>>n;
	cin.ignore();
	SinhVien ds[n];
	for(int i=0;i<n;i++){
		ds[i].stt=i+1;
		cin>>ds[i].msv;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin>>ds[i].lop;
		cin>>ds[i].email>>ds[i].dn;
	}
	sort(ds, ds+n,cmp);
	int t;//so doanh nghiep
	cin>>t;
	string s;//Ten dn
	while(t--){
		cin>>s;
		for(int i=0;i<n;i++){
			if(ds[i].dn==s){
				cout<<ds[i].stt<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].email<<" "<<ds[i].dn;
				cout<<endl;
			}
		}
	}
}
