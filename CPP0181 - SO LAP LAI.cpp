#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a, x, y;//a la so ban da, x va y la so lan lap lai
		cin>>a>>x>>y;
		long long p=__gcd(x,y);
		for(int i=1;i<=p;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
