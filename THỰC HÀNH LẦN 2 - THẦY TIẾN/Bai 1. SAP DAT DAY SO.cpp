#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int *p=max_element(a,a+n);
		int vitri;
		for(int i=0;i<n;i++){
			if(a[i]==*p){
				vitri=i;
				break;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]<0){
				if(i==vitri){
					cout<<m<<" ";
				}
				cout<<a[i]<<" ";
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]>=0){
				if(i==vitri){
					cout<<m<<" ";
				}
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}