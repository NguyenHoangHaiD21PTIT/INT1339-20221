#include<bits/stdc++.h>
using namespace std;
long long phibonaxi(long long n){//so phibo thu n
	if(n==0||n==1){
		return n;
	} else {
		long long f0=0, f1=1, fn;
		for(long long i=2;i<=n;i++){
			fn=f0+f1;
			f0=f1;
			f1=fn;
		}
		return fn;
	}
}
long long ktphibo(long long n){
	for(int i=0;phibonaxi(i)<=n;i++){
		if(phibonaxi(i)==n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(ktphibo(n)==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
