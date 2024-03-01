#include<bits/stdc++.h>
using namespace std;
int check1 (string &s){//Kiem tra dieu kien tang chat
	if(s[5]<s[6]&&s[6]<s[7]&&s[7]<s[9]&&s[9]<s[10]){
		return 1;
	} else {
		return 0;
	}
}
int check2(string &s){//Kiem tra dieu kien bang nhau
	if(s[5]==s[6]&&s[6]==s[7]&&s[7]==s[9]&&s[9]==s[10]){
		return 1;
	} else {
		return 0;
	}
}
int check3(string &s){//Kiem tra dieu kien 3 so dau=nhau, 2 so cuoi=nhau
	if(s[5]==s[6]&&s[6]==s[7]&&s[9]==s[10]){
		return 1;
	} else {
		return 0;
	}
}
int check4(string &s){//Loc phat
	if((s[5]=='6'||s[5]=='8')&&(s[6]=='6'||s[6]=='8')&&(s[7]=='6'||s[7]=='8')&&(s[9]=='6'||s[9]=='8')&&(s[10]=='6'||s[10]=='8')){
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
		getline(cin,s);
		if(check1(s)==1||check2(s)==1||check3(s)==1||check4(s)==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
		
	
