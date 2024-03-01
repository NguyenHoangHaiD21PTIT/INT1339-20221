#include<bits/stdc++.h>
using namespace std;
long long checknt(long long n){ // kiem tra nguyen to
	if(n<=1){
		return 0;
	} else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	return 1;
	}
}
int main(){
int t;
cin >> t;
while(t--){
	int  y;
	cin >> y;
	double y1=sqrt(y);
	double y2=(int) y1;
	long long dem =0;
    for(long long i=2;i<=y2;i++){
       	if(checknt(i)==1){
       	    cout << i*i << " ";
		}
	}
	cout << endl;
}
}
    	

