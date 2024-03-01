#include<bits/stdc++.h>
using namespace std;
int nt[10050];
void sang(){
	for(int i =0;i<=10000;i++){
		nt[i]=1;
	}
	nt[0]=0;nt[1]=0;
	for(int i=0;i<=sqrt(10000);i++){
		if(nt[i]==1){
			for(int j=i*i;j<10000;j+=i){
				nt[j]=0;
			}
		}
	}
}
int main(){
	int a; 
	cin >> a ;
	sang();
	while(a--){
		int n; 
		cin>>n;
		int check2 = 0; 
		for(int i=2;i<=n/2;i++){
			if(nt[i]==1&&nt[n-i]==1){
				cout << i << " " << n-i<<endl;
				check2 =1;
				break;
			}
		}
		if(check2 == 0 ) {
			cout << "-1\n";
		}
	}
}

