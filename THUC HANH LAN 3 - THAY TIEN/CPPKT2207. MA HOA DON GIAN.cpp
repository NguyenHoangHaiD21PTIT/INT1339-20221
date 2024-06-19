#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){//chu hoa --> lui xuong 2 chu cai do khi ma hoa da tang
			if(s[i]=='A'){
				s[i]='Y';
			} else if (s[i]=='B') {
				s[i]='Z';
			} else {
				s[i]-=2;
			}
		} else if(s[i]>='a'&&s[i]<='z') {//chu thuong --> tang them 2 chu cai do khi ma hoa da giam
			if(s[i]=='y'){
				s[i]='a';
			} else if(s[i]=='z') {
				s[i]='b';
			} else {
				s[i]+=2;
			}
		}
	}
	cout<<s;
}
//test case: Jmk lyw rfg E++
