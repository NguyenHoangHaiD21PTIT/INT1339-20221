#include<bits/stdc++.h>
using namespace std;
string max(string &c){
	for(int i=0;i<c.size();i++){
		if(c[i]=='5'){
			c[i]='6';
		}
	}
	return c;
}
string min(string &c){
	for(int i=0;i<c.size();i++){
		if(c[i]=='6'){
			c[i]='5';
		}
	}
	return c;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		cin>>s1;
		string s2;
		cin>>s2;
		long long max1=std::stol(max(s1));
		long long max2=std::stol(max(s2));
		long long min1=std::stol(min(s1));
		long long min2=std::stol(min(s2));
		long long tongmax=max1+max2;
		long long tongmin=min1+min2;
		cout <<tongmin<<" "<<tongmax<<endl;
	}
}
