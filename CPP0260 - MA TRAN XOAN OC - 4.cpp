#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;
		int v[n*n];
		for(int i=0;i<n*n;i++){
			cin>>v[i];
		}
		sort(v,v+n*n);
		int x=0;
		int a[n][n];
		int cot1=0, cot2=n-1, hang1=0, hang2=n-1;
		while(cot1<=cot2&&hang1<=hang2){
			for(int i=cot1;i<=cot2;i++){
				a[hang1][i]=v[x++];
			}
			hang1++;
			for(int i=hang1;i<=hang2;i++){
				a[i][cot2]=v[x++];
			}
			cot2--;
			if(hang1<=hang2){
				for(int i=cot2;i>=cot1;i--){
					a[hang2][i]=v[x++];
				}
				hang2--;
			}
			if(cot1<=cot2){
				for(int i=hang2;i>=hang1;i--){
					a[i][cot1]=v[x++];
				}
				cot1++;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
}
