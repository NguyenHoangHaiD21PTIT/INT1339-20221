#include<bits/stdc++.h>
using namespace std;
int count(string s, int k){//dem so xau con chia het cho k
	int dem=0;
	for(int i=0;i<s.size();i++){
		int du=0;
		for(int j=i;j<s.size();j++){
			du=(du*10+s[j]-'0')%k;
			if(du==0){
				dem++;
			} 
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<count(s,8)-count(s,24)<<endl;
	}
}