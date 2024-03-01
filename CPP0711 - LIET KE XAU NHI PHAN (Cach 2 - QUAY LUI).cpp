#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void inkq(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void thu(int i){//thu gia tri cho phan tu thu i
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){//xet du gia tri cho n so trong xau
			inkq();
		} else {//Chua xet du gia tri cho tat ca cac so
			thu(i+1);//xet gia tri cho so tiep theo
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		thu(1);//thu gia tri cho bit thu nhat
		cout<<endl;//het 1 case
	}
}