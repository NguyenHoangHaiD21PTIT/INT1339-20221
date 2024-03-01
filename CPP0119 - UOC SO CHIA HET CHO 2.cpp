#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){//i la uoc cua n --> n/i cung la uoc cua n
				if(i%2==0) dem++;
				if((n/i)%2==0) dem++;
				if((n/i) ==i &&i%2==0) dem--;
			}
		}
		cout<<dem<<endl;
	}
}
					

