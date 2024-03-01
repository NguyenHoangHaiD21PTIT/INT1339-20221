#include<bits/stdc++.h>
using namespace std;
int dem[100005]={};
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(dem,0,sizeof(dem));
		int n;
		cin>>n;
		int check=0;//chua co so nao lap lai
		int a[n];
		int kq;
		for(int i=0;i<n;i++){
			cin>>a[i];
			dem[a[i]]++;
			if(check==0&&dem[a[i]]==2){
				check=1;
				kq=a[i];
			}
		}
		if(check==0){
			cout<<-1<<endl;
		} else {
			cout<<kq<<endl;
		}
	}
}
