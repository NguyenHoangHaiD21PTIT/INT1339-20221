#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long tich, tichmax=-1e18;//tich: tich cua doan con dang xet
		int check=0;//Kiem tra dieu kien co so khong am chua
	    for(int i=0;i<n;i++){
	    	tich=1;
	    	for(int j=i;j<n;j++){
	    		tich*=a[j];
	    		tichmax=max(tichmax,tich);
	    	}
	    }
	    cout<<tichmax<<endl;
	}
}
	    	
			
