#include<bits/stdc++.h>
using namespace std;
long long powdu(long long a, long long b, long long m){
	if(b==0){
		return 1;
	}
	long long tmp=powdu(a,b/2, m);
	if(b%2==0){
		return (tmp%m)*(tmp%m)%m;
	} else {
		return (a%m*((tmp%m)*(tmp%m)%m))%m;
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		cin>>a;
		long long b, m;
		cin>>b>>m;
		long long du=0;
		//tim a%m
		for(long long i=0;i<a.size();i++){
			du=(du*10+a[i]-'0')%m;
		}
		//(a^b)%m=((a%m)^b)%m=(du^b)%m;
		cout<<powdu(du,b,m)<<endl;
	}
}