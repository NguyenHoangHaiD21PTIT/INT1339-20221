#include<bits/stdc++.h>
using namespace std;
int phibonaxi(int n){
	int fn=0, f0=0, f1=1;
	if(n==0||n==1){
		return n;
	} else {
		for(int i=2;i<=n;i++){
			fn=f0+f1;
			f0=f1;
			f1=fn;
		}
	    return fn;
	}
}
int check(int n){
	int check=0;
	for(int i=0;phibonaxi(i)<=n;i++){
		if(phibonaxi(i)==n){
			check=1;
			break;
		}
	}
	return check;
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
			if(check(a[i])==1){
				cout<<a[i] <<" ";
			}
		}
		cout<<endl;
	}
}
		
		
