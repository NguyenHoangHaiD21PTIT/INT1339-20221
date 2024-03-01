#include<bits/stdc++.h>
using namespace std;
int uocnt(int n, int k){
	int dem=0;//dung dem dem so uoc nt: VD: 3x3x5x7 thi tinh dem=4
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				dem++;
				n=n/i;
				if(dem==k){
					return i;
				}
			}
		}
	}
	if(n!=1){
		dem++;
	}
	if(dem==k){
		return n;
	} else {
		return -1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<uocnt(n,k)<<endl;
	}
}
