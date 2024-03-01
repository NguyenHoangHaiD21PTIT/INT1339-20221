#include<bits/stdc++.h>
using namespace std;
struct dn{
	string mdn, ten;
	int sosv;
};
bool cmp(dn a, dn b){
	if(a.sosv!=b.sosv){
		return a.sosv>b.sosv;
	}
	return a.mdn<b.mdn;
}
int main(){
	int n;
	cin>>n;
	dn ds[n];
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].mdn);
		getline(cin, ds[i].ten);
		cin>>ds[i].sosv;
	}
	sort(ds,ds+n, cmp);
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" "<<"DEN "<<b<<" "<<"SINH VIEN:"<<endl;
		for(int i=0;i<n;i++){
			if(ds[i].sosv>=a&&ds[i].sosv<=b){
				cout<<ds[i].mdn<<" "<<ds[i].ten<<" "<<ds[i].sosv<<endl;
			}
		}
	}
}
