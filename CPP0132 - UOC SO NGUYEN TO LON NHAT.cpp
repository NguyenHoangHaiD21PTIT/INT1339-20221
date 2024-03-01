#include<bits/stdc++.h>
using namespace std;
long long checknt(long long n){
	if(n<=1){
		return 0;
	} else {
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	return 1;
    }
}
long long uocnt(long long n){
	int x;
	for(long long i=1;i<=sqrt(n);i++){
		if(n%i==0){ 
		    if(checknt(n/i)==1){
		 	    return n/i;
		    } else if (checknt(i)==1){
		    	x=i;
		    }
		}
	}
return x;
}
int main(){
int t;
cin >> t;
while(t--){
	long long n;
	cin >> n;
	cout << uocnt(n) << endl;
}
}
