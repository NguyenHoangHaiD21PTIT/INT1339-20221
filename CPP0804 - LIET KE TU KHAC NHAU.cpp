#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){//viet thuong toan bo cac chu cai trong xau s
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	string s;//nhap tung tu
	set<string>ss;//loai bo trung nhau, sort theo tt tu dien
	fstream infile;
	infile.open("VANBAN.in");
	while(infile>>s){
		string s1;
		s1=chuanhoa(s);
		ss.insert(s1);
	}
	for(auto x:ss){
		cout<<x<<endl;
	}
}