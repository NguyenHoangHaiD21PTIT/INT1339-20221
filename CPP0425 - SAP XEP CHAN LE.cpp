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
		sort(a,a+n);
		int l, r;
		if(n%2==0){
			l=0; r=n/2;
			while((l<=(n/2)-1)&&(r<=n-1)){
				cout <<a[l]<<" "<<a[r]<<" ";
				r++;l++;
			}
		} else {
			l=0; r=n/2+1;
			while((l<=(n/2))&&(r<=n-1)){
				cout <<a[l]<<" "<<a[r]<<" ";
				r++;l++;
			}
			cout<<a[n/2];
		}
		cout<<endl;
	}
}
