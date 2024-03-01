#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int phibo[1050];
//f3=f1+f2=>f3%m=(f1+f2)%m=(f1%m+f2%m)%m;    f4=f3+f2=>f4%m=(f3+f2)%m=......
void timso(){//phibo[i]%mod
	phibo[0]=0;
	phibo[1]=1;
	for(int i=2;i<=1000;i++){
		phibo[i]=(phibo[i-1]%mod+phibo[i-2]%mod)%mod;
	}
}
int main(){
	int t;
	cin>>t;
	timso();
	while(t--){
		int n;
		cin>>n;
		cout<<phibo[n]<<endl;
	}
}