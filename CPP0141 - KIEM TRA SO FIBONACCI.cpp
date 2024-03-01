#include<bits/stdc++.h>
using namespace std;
long long phibonaxi(long long n){
	long long fn=0, f0=0, f1=1;
	if(n==0||n==1){
		return n;
	} else {
		for(long long i=2;i<=n;i++){
			fn=f0+f1;
			f0=f1;
			f1=fn;
		}
	    return fn;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int check=0;//gia su k la so phibo
		for(int i=0;phibonaxi(i)<=n;i++){
		    if(phibonaxi(i)==n){
		    	check=1;
		    	break;
		    }
		}
		if(check==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
			
