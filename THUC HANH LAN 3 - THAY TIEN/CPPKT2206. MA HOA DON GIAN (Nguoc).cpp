#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){//chu hoa --> ma hoa tang 2 chu cai
			if(s[i]=='Y'){
				s[i]='A';
			} else if (s[i]=='Z') {
				s[i]='B';
			} else {
				s[i]+=2;
			}
		} else if(s[i]>='a'&&s[i]<='z') {//chu thuong --> ma hoa giam 2 chu cai
			if(s[i]=='a'){
				s[i]='y';
			} else if(s[i]=='b') {
				s[i]='z';
			} else {
				s[i]-=2;
			}
		}
	}
	cout<<s;
}
//test case: Hom nay thi C++
