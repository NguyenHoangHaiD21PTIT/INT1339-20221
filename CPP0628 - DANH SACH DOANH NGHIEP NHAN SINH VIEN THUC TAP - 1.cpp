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
	for(int i=0;i<n;i++){
		cout<<ds[i].mdn<<" "<<ds[i].ten<<" "<<ds[i].sosv<<endl;
	}
}
