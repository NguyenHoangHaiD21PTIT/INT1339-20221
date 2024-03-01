#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a, b;
		cin>>a;
		cin>>b;
		long long c;
		cin>>c;
		long long du1;//a%c
		for(int i=0;i<a.size();i++){
			du1=(du1*10+a[i]-'0')%c;
		}
		long long du2;//b%c
		for(int i=0;i<b.size();i++){
			du2=(du2*10+b[i]-'0')%c;
		}
		//(du1*du2)%c=((du1%c)*(du2%c))%c
		long long k1=du1%c;
		long long k2=du2%c;
		long long kq=(k1*k2)%c;
		cout<<kq<<endl;
	}
}