#include<bits/stdc++.h>
//MODULO (abc)%m=[(a%m)*(b%m)*(c%m)]%m
using namespace std;
long long powdu(long long a, long long b, long long m){
	long long res=1;
	while(b){
		if(b%2==1){
			res=(res*a)%m;
		}
		a=(a*a)%m;
		b/=2;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x, y, p;//x la co so y la so mu
		cin>>x>>y>>p;
		cout<<powdu(x,y,p)<<endl;
	}
}