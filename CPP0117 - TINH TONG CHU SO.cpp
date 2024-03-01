#include<bits/stdc++.h>
using namespace std;
int tongcs(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int tongfinal(int n){
	while(n>=10){
		n=tongcs(n);
	}
	return n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<tongfinal(n)<<endl;
	}
}
