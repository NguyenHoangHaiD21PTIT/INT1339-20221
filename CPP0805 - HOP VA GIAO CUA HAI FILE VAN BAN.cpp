#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){//viet thuong toan bo cac chu cai trong xau s
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	fstream in1, in2;
	in1.open("DATA1.in");
	in2.open("DATA2.in");
	set<string>sstr1;//loai cac tu trung nhau va viet thuong cac tu file DATA1
	set<string>sstr2;//loai cac tu trung nhau va viet thuong cac tu file DATA2
	set<string>sstr3;//hop hai tap tu
	string s1, s2;//nhap xau file 1 va 2
	while(in1>>s1){//nhap file 1
		string s;
		s=chuanhoa(s1);
		sstr1.insert(s);
		sstr3.insert(s);
	}
	while(in2>>s2){//nhap file 2
		string s;
		s=chuanhoa(s2);
		sstr2.insert(s);
		sstr3.insert(s);
	}
	for(auto x: sstr3){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x: sstr1){//duyet tat ca cac tu trong set 1 xem co trong set 2 khong
		if(sstr2.find(x)!=sstr2.end()){
			cout<<x<<" ";
		}
	}
}
	