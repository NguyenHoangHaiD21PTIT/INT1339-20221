#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin>> n >>x;
		int a[n];
		int vitri=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==x){
				vitri=i;
			}
		}
		cout<<vitri<<endl;
	}
}
			
