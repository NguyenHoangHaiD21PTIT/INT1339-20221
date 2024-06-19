#include<bits/stdc++.h>
using namespace std;
long long tongcs(long long n){
	long long tong=0;
	while(n>0){
		tong=tong+n%10;
		n=n/10;
	}
	return tong;
}
long long tongntu(long long n){
	long long tong=0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				tong=tong+tongcs(i);
				n=n/i;
			}
		}
	}
	if(n!=1){
		tong=tong+tongcs(n);
	}
	return tong;
}
int main(){
	long long n;
	cin>>n;
	if(tongcs(n)==tongntu(n)){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
