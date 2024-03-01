#include<bits/stdc++.h>
using namespace std;
int ktgiam(int n){
    int k=n%10;
    n=n/10;
    while(n>0){
    	if(n%10<=k){
    		return 0;
    	} 
    	k=n%10;
    	n=n/10;
    }
    return 1;
}
int kttang(int n){
    int k=n%10;
    n=n/10;
    while(n>0){
    	if(n%10>=k){
    		return 0;
    	} 
    	k=n%10;
    	n=n/10;
    }
    return 1;
}
int ktngto(int n){
	if(n<2){
		return 0;
	} else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
				break;
			}
		}
	    return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p1=pow(10,n-1);
		int p2=pow(10,n)-1;
		int dem=0;
		for(int i=p1;i<=p2;i++){
			if((kttang(i)==1||ktgiam(i)==1)&&ktngto(i)==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}

