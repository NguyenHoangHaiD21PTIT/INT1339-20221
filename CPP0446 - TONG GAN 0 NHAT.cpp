#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >>a[i];
		}
		int min=1e9;
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			    if(abs(a[i]+a[j])<min){
			    	min=abs(a[i]+a[j]);
			    	tong=a[i]+a[j];
			    }
			}
		}
		cout<<tong<<endl;
	}
}
