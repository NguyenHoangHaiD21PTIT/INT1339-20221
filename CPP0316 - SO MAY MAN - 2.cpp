#include<bits/stdc++.h>
using namespace std;
int tongcs(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int tongxau(string s){
	int tong=0;
	for(int i=0;i<s.size();i++){
		tong+=s[i]-'0';
	}
	while(tong>=10){
		tong=tongcs(tong);
	}
	if(tong==9){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<tongxau(s)<<endl;
	}
}
	
