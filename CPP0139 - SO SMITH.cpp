#include<bits/stdc++.h>
using namespace std;
int tongcs(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int smith(int n){
	int tmp=n;
	//Bien tmp luu gia tri cua n, ta lam viec va bien doi tren so n ban dau
		int tong=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				while(n%i==0){
					tong+=tongcs(i);
					n=n/i;
				}
			}
		}
		//Het vong for ma n van chua bi thay doi ---> n la snt
		if(tmp==n){
			return 0;
		}
		if(n!=1){
			tong+=tongcs(n);
		}//Luon nho la khong duoc bo qua uoc snt cuoi cung
		if(tongcs(tmp)==tong){
			return 1;
		} else {
			return 0;
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(smith(n)==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
					

