#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	if(a.size()!=b.size()){
		return a.size()<b.size();
	}
	return a<b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<string>vs;
		s=s+"%";
		string c="";
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				c=c+s[i];
			} else {
				if(c!=""){
					vs.push_back(c);
				}
				c="";
			}
		}
		sort(vs.begin(),vs.end(), cmp);
		cout<<vs[vs.size()-1]<<endl;
	}
}