#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string s2;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				s2.push_back(s[i]);
			}
		}
		if(s2[0]=='8'&&s2[1]=='4'){
			cout<<"0";
			for(int i=2;i<s2.size();i++){
				cout<<s2[i];
			}
		} else {
			cout<<s2;
		}
		cout<<endl;
	}
}
