#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char s[1500];
		cin >> s;
		int r=0;//so du
		for(int i=0;i<strlen(s);i++){
			r=(r*2+(s[i]-'0'))%5;
		}
		if(r==0){
			cout <<"Yes"<<endl;
		} else {
			cout <<"No"<<endl;
		}
	}
}
