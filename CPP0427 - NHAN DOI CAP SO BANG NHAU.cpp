#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		cin>>a[0];
		int dem=0;
	    if(n==1){
	    	cout<<a[0];
		} else {
			for(int i=1;i<n;i++){
				cin>>a[i];
				if(a[i]==a[i-1]&&a[i]!=0){//Dieu kien a[i]=a[i+1] va deu khac 0
					a[i-1]*=2;
					a[i]=0;
				}
			}
			for(int i=0;i<n;i++){
				if(a[i]!=0){
					cout<<a[i]<<" ";
					dem++;
				}	
			}
			int p=n-dem;
			while(p--){
				cout<<"0 ";
			}
		}
		cout<<endl;	
	}
}
