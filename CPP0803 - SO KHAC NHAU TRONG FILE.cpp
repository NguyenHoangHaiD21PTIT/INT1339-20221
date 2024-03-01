#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	map<int,int>mp;
	fstream infile;
	infile.open("DATA.in");
	while(infile>>n){
		mp[n]++;
	}
	for(auto x:mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
}