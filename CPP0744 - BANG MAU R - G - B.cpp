#include<bits/stdc++.h>
using namespace std;
long long gt(long long n){
	if(n==0||n==1){
		return 1;
	} else {
		long long tich=1;
		for(long long i=2;i<=n;i++){
			tich*=i;
		}
		return tich;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, r, g, b;
		cin>>n>>r>>g>>b;
		int r0,g0,b0;
		//goi r0,g0,b0 la so cac chu R,G, B thoa man
		long long kq=0;
		for(int r0=n;r0>=r;r0--){
		//chon r0 hop le (>=r&<=n)va co dinh r0 ==> g0+b0=n-r0;(1)
			for(int g0=n-r0;g0>=g;g0--){
				//chon g0 hop le (>=g&<=n-r0)==> b0=n-r0-b0;Neu b0>=b thi ta co bo ba so (g0,r0,b0) thoa man-> Hoan vi lap
				b0=n-r0-g0;
				if(b0>=b){
					kq+=gt(n)/(gt(r0)*gt(g0)*gt(b0));
				}
			}
		}
		cout<<kq<<endl;
	}
}