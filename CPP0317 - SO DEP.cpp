#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char x[600];
		cin >>x;
		int check=1;//Gia su xau doi xung
		for(int i=0;i<=strlen(x)/2;i++){
			if(x[i]!=x[strlen(x)-i-1]){
				check=0;
				break;
			}
		}
		int check2=1;
		if(check==0){
			cout<<"NO" <<endl;
		} else {
		    for(int i=0;i<strlen(x);i++){
		    	if((x[i]-'0')%2==1){
		    		check2=0;
		    		break;
		    	}
		    }
		    if(check2==1){
		    	cout <<"YES"<<endl;
		    } else{
		    	cout <<"NO"<<endl;
			}
		}
	}
}
			
