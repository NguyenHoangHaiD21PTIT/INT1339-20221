#include<bits/stdc++.h>
using namespace std;
int lap(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				return a[i];
			}
		}
	}
	return -1;
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
		if(lap(a,n)!=-1){
			cout<<lap(a,n)<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
