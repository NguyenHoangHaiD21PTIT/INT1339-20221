#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		long long m;
		cin>>m;
		long long du=0;
		for(int i=0;i<s.size();i++){
			du=(du*10+(s[i]-'0'))%m;
		}
		cout<<du<<endl;
	}
}
