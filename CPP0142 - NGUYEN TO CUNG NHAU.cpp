#include<bits/stdc++.h>
using namespace std;
int nt[100001];
void sang(){
	for(int i=1;i<=100001;i++){
		nt[i]=1;//gia su ban dau tat cac la snt
	}
	nt[1]=nt[0]=0;
	for(int i=2;i<=sqrt(100000);i++){
		if(nt[i]==1){//i la snt thi tat ca cac boi cua i khong la snt
			for(int j=i*i;j<=100000;j+=i){
				nt[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=n;i++){
			if(__gcd(i,n)==1){
				dem++;
			}
		}
		if(nt[dem]==1){
			cout<<"1"<<endl;
		} else {
			cout<<"0"<<endl;
		}
	}
}
	
