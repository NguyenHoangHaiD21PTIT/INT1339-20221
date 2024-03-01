// KY THUAT CUA SO TRUOT
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		//Tinh cua so truot k phan tu dau tien
		long long tong=0, tongmax=0, chiso=0;//chi so la chi so dau tien cua day con dai k tong max
		for(int i=0;i<k;i++){
			tong=tong+a[i];
			tongmax=tong;
		}
		//de so i dang xet ton tai k-1 so sau no thi i(0->n-k+1)
		for(int i=1;i<n-k+1;i++){
			//tu day con thu 2, tong cua so truot dang xet = tong cstruot truoc do - phan tu vua bi bo + phan tu vua them vao
			tong=tong-a[i-1]+a[i+k-1];
			if(tong>=tongmax){
				tongmax=tong;
				chiso=i;
			}
		}
		for(int i=chiso;i<=chiso+k-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
