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
			cin>>a[i];
		}
		int l=0, r=n-1;
		int dem=0;
		while(l<r){
			if(a[l]==a[r]){
				l++;
				r--;
			} else if (a[l]<a[r]){
				l++;
				a[l]=a[l]+a[l-1];
				dem++;
			} else {
				r--;
				a[r]=a[r]+a[r+1];
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}