#include<bits/stdc++.h>
using namespace std;
pair<string, int>p;
int check(string s){
	if(s.length()==1){
		return 0;
	}
	for(int i=0;i<=s.length()/2;i++){
		if(s[i]!=s[s.length()-i-1]){
			return 0;
		}
	}
	return 1;
}
bool cmp(pair<string, int>a, pair<string, int>b){
	//So co so chu so lon hon se lon hon, khi cung chu so ta moi so sanh theo thu tu tu dien
	if(a.first.length()!=b.first.length()){
		return a.first.length()>b.first.length();
	}
	return a.first>b.first;
}
int main(){
	map<string,int>mp;
	string s;
	vector<pair<string, int>>v;
	while(cin>>s){
		if(check(s)==1){
			mp[s]++;
		}
	}
	for(auto x: mp){
		v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
		
			
			
