#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		int dem1=0;//dem so phan tu <=k
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k){
				dem1++;
			}
		}
		int dem2=0;//dem2: dem so phan tu <=k trong tung cua so truot
		//xet cua so truot dau tien
		for(int i=0;i<dem1;i++){
			if(a[i]<=k){
				dem2++;
			}
		}
		//Tim cua so truot (do dai la "dem" phan tu) co so pt <=k nhieu nhat)
		int demmax=dem2;
		for(int i=dem1;i<n;i++){
			if(a[i]<=k) dem2++;
			if(a[i-dem1] <= k) dem2--;
			demmax=max(demmax,dem2);
		}
		//Don tat ca cac phan tu khac ve noi cua so truot co nhieu pt <=k nhat
		cout<<dem1-demmax<<endl;
	}
}