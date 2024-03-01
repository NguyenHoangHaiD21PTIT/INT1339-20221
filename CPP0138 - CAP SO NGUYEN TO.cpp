#include<bits/stdc++.h>
using namespace std;
int check(int n) {
	int kt=1;
	if(n<2) {
		kt=0;
	} else {
	    for(int i=2; i<= sqrt(n) ; i++) {
		    if(n%i==0) {
		        kt=0;
		        break;
		    }
		}
	}
	return kt;
}
int main(){
	int a; 
	cin >> a ;
	while(a--){
		int n; 
		cin>>n;
		int check2 = 0; 
		for(int i=2;i<=n/2;i++){
			if(check(i)==1&&check(n-i)==1){
				cout << i << " " << n-i<<endl;
				check2 =1;
				break;
			}
		}
	}
}

