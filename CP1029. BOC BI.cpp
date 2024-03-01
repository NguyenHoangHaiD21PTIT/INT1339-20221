#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3];
	for(int i=0;i<3;i++) cin>>a[i];
	int k;
	cin>>k;
	int ans = 0;
	for(int i=0;i<3;i++){
		if(a[i]<k-1) ans+=a[i];
		else ans+=k-1;
	}
	cout<<ans+1;
}