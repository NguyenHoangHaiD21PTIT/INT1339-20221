#include<bits/stdc++.h>
using namespace std;
void Vietthuong(string &x){//viet thuong toan bo
	for(int i = 0; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	map<string,int>mp;
	while(t--){
		string c;
		getline(cin, c);
		stringstream c1(c);
		string token;
		string x="";//Dung de luu phan xau truoc dau@
		vector<string>s;
		while(c1>>token){
			s.push_back(token);
		}
		Vietthuong(s[s.size()-1]);
		x=x+s[s.size()-1];
		for(int i=0;i<s.size()-1;i++){
			s[i][0]=tolower(s[i][0]);
			x=x+s[i][0];
		}
		mp[x]++;
		if(mp[x]>=2){
			cout<<x<<mp[x]<<"@ptit.edu.vn";
		} else if(mp[x]==1){
			cout<<x<<"@ptit.edu.vn";
		}
		cout<<endl;
	}
}
