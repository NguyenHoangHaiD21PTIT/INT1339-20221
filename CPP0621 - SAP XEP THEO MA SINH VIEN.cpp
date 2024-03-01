#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop, mail;
};
bool cmp(SinhVien a, SinhVien b){
	return a.msv<b.msv;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	SinhVien ds[n];
	for(int i=0;i<n;i++){
		getline(cin, ds[i].msv);
		getline(cin, ds[i].ten);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].mail);
	}
	sort(ds,ds+n, cmp);
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].mail;
		cout<<endl;
	}
}
