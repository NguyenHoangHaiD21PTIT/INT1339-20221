#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int dem[100000]={};
		memset(dem, 0, sizeof(dem));
		string c;
		cin >> c;
		for(int i=0;i<c.size();i++){
			dem[c[i]-'0']++;
		}
		for(int i=0;i<c.size();i++){
			if(dem[c[i]-'0']==1){
				cout << c[i];
			}
			dem[c[i]-'0']=0;
		}
		cout << endl;
	}
}
