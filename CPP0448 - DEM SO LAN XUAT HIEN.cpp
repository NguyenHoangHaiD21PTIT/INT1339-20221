#include<bits/stdc++.h>
using namespace std;
int dem[1000005]={};
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(dem,0,sizeof(dem));
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			dem[a[i]]++;
		}
		if(dem[x]==0){
			cout<<"-1"<<endl;
		} else {
			cout<<dem[x]<<endl;
		}
	}
}
		
	
