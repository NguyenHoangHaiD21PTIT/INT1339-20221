//Tim khoang chung dai nhat co tong bang nhau
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a1[n];
		int a2[n];
		for(int i=0;i<n;i++){
			cin>>a1[i];
		}
		for(int i=0;i<n;i++){
			cin>>a2[i];
		}
		int lmax=-1e9;
		for(int i=0;i<n;i++){
			int tong1=0, tong2=0;
			for(int j=i;j<n;j++){
				tong1+=a1[j];
				tong2+=a2[j];
				if(tong1==tong2){
					int l=j-i+1;
					lmax=max(l,lmax);
				}
			}
		}
		cout<<lmax<<endl;
	}
}