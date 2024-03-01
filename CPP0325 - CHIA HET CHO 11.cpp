#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char c[1500];
		cin>>c;
		int tongchan=0, tongle=0;//tong chu so hang chan, hang le
		for(int i=0;i<strlen(c);i++){
			if(i%2==0){
				tongchan+=c[i]-'0';
			} else {
				tongle+=c[i]-'0';
			}
		}
		if((tongchan-tongle)%11==0){
			cout <<"1" <<endl;
		} else {
			cout <<"0"<<endl;
		}
	}
}
			
