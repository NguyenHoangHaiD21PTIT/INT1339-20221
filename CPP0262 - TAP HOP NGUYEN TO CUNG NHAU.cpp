#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, m;
		//S1+S2=S,S1-S2=m-->Giai he pt
		cin>>n>>m;
		long long S=(n+1)*n/2;
		long long S1=(S+m)/2;
		long long S2=S-S1;
		int check;
		if(S1+S2==S&&abs(S1-S2)==m){
			if(__gcd(S1,S2)==1){
				check=1;
			} else {
				check=0;
			}
		} else {
			check=0;
		}
		if(check==1){
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
}