#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int tong=0;
		multiset<char>ms;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				tong+=s[i]-'0';
			} 
			if(s[i]>='A'&&s[i]<='Z'){
				ms.insert(s[i]);
			}
		}
		for(auto x:ms){
			cout<<x;
		}
		cout<<tong;
	    cout<<endl;
	}
}
