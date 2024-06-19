#include<bits/stdc++.h>
using namespace std;

void inthuong(string &s){//ham viet thuong xau
	for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
}

int main(){
	fstream infile;
	infile.open("CONTACT.in");
	string s;
	set<string>sstr;
	while(infile>>s){//nhap het cac email
		inthuong(s);//viet thuong xau s nhap vao
		sstr.insert(s);
	}
	for(auto x:sstr) cout<<x<<endl;
	infile.close();
}
