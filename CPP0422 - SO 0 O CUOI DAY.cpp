#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		while(n--){
			long long x;
			cin>>x;
			if(x==0){
				dem++;
			} else {
				cout <<x<<" ";
			}
		}
		while(dem--){
			cout<<"0 ";
		}
		cout<<endl;
	}
}
