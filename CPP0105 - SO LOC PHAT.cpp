#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char c[13];
		cin >> c;
		int check=1;//gia su ban dau so chi chua 0,6,8
		for(int i=0;i<strlen(c);i++){
			if(c[i]!='0'&&c[i]!='6'&&c[i]!='8'){
				check=0;//do so da chua so khac ngoai {0;6;8}
				break;
			}
		}
		if(check==0){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}
		
