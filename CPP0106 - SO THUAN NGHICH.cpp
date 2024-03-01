#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin>>a;
		b=a;
		reverse(b.begin(),b.end());
		if(a==b){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
