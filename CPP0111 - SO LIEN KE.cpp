#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c;
		cin >> c;
		int check=1;
		for(int i=0;i<c.size()-1;i++){
			if(abs(c[i]-c[i+1])!=1){
				check=0;
				break;
			}
		}
		if(check==1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
	
