#include<bits/stdc++.h>
using namespace std;
int ktkgiam(int a[], int l, int r){//Day bang nhau hoac tang chat
	for(int i=l;i<=r-1;i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}
	return 1;
}
int ktktang(int a[], int l, int r){//Day bang nhau hoac giam chat
	for(int i=l;i<=r-1;i++){
		if(a[i]<a[i+1]){
			return 0;
		}
	}
	return 1;
}
int kttanggiam(int a[], int l, int r){//nua dau tang nua sau giam
	int vitri=-1;
	for(int i=l;i<=r-1;i++){
		if(a[i]>a[i+1]){//dinh day
			vitri=i;
			break;	
		}
	}
	if(vitri==-1||vitri==l){//day tang hoan toan
		return 0;
	//Tu vi tri i ve cuoi phai la day giam dan
	} else {
		for(int i=vitri;i<=r-1;i++){
			if(a[i]<a[i+1]){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l, r;
		cin>>l>>r;
		if((ktkgiam(a,l,r)==1)||(ktktang(a,l,r)==1)||(kttanggiam(a,l,r)==1)){
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
}	

