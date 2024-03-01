#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		int dem=0;
		for(int i=0;i<s.size();i++){
			set<char>a;
			for(int j=i;j<s.size();j++){
				a.insert(s[j]);
				if(a.size()==k){
					dem++;
				}
				if(a.size()>k){
					break;
				}
			}
		}
		cout<<dem<<endl;
	}
}