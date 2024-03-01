#include<bits/stdc++.h>
using namespace std;
long long hh(long long n){
	long long tong=1;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i){//i=n/i thi do la so cp, TH nay i se bi tinh 2 lan
			    tong+=i+n/i;
			} else {
			    tong+=i;
			}
		}
	}
	if(tong ==n){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(hh(n)==1){
			cout<<"1"<<endl;
		} else {
			cout<<"0"<<endl;
		}
	}
}
				
