#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		long long a;
		cin>>a;
		string b;
		cin>>b;
		long long du=0;
		//Tim b%a
		for(int i=0;i<b.size();i++){
			du=(du*10+b[i]-'0')%a;
		}
		long long kq=__gcd(a, du);
		cout<<kq<<endl;
	}
}