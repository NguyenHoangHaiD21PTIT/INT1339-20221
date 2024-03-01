#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char c[50];
		cin >> c;
		for(int i=0;i<strlen(c)-2;i++){
			if(c[i]=='0'&&c[i+1]=='8'&&c[i+2]=='4'){
				c[i]=c[i+1]=c[i+2]='x';
			}
		}
		for(int i=0;i<strlen(c);i++){
			if(c[i]!='x'){
				cout << c[i];
			}
		}
		cout << endl;
	}
}
