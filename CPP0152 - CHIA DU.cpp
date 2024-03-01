#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin>>a>>m;
		int kq=-1e9;
		for(int i=0;i<=m-1;i++){
			if((a*i)%m==1){
				kq=i;
				break;
			}
		}
		if(kq==-1e9){
			cout<<"-1"<<endl;
		} else {
			cout<<kq<<endl;
		}
	}
}
