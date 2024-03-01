#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int C[1000][1000];
void tohop(){//mang cac to hop %1e9+7
	//To hop chap j cua i(j<i)
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				C[i][j]=1;
			} else {
				C[i][j]=C[i-1][j]+C[i-1][j-1];
				C[i][j]%=MOD;
			}
		}
	}
}
int main(){
	tohop();
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
}