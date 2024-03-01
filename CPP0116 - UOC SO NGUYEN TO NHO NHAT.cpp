#include<bits/stdc++.h>
using namespace std;
/*4: 4 8 2 6 0 4;    2: 2 4 6 8 0;      6: 6 2 8 4 0      ; 8: 8 6 4 2 0    5:0 5 
---> so  le khong the chia het cho 2, 4, 6, 8, 10 va cac so tan cung = cac chu so nay */
int uoc(int n){
	if(n==1){
		return 1;
	} else if(n%2==0){
		return 2;
	} else {
		for(int i=3;i<=n;i+=2){//bo qua tat ca cac so i chan
		    if(n%i==0){
		    	return i;
		    }
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<uoc(i)<<" ";
		}
		cout<<endl;
	}
}
