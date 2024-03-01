#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int kq=0;
		for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]) kq++;
			}
		}
		cout<<kq+s.size()<<endl;
	}
}