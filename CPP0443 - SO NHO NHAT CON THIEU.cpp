#include<bits/stdc++.h>
using namespace std;
int dem[1000005]={};
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		memset(dem,0,sizeof(dem));
		int n1=n-1;
		while(n1--){
			int x;
			cin>>x;
			if(x>0) dem[x]++;
		}
		for(int i=1;i<=1000001;i++){
			if(dem[i]==0){
				cout <<i;
				break;
			}
		}
		cout<<endl;
	}
}
