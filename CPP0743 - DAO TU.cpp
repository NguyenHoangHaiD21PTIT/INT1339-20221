#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string c1;
		getline(cin, c1);
		stringstream c2(c1);
		string token;
		vector<string>v;
		while(c2>>token){
			v.push_back(token);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
		
