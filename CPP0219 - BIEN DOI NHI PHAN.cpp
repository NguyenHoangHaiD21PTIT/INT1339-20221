#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
	int hang, cot;
	cin >> hang >> cot;
	int a[hang][cot];
	int b[hang][cot];
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			if(a[i][j]==1){
				for(int k=0;k<hang;k++){
					b[k][j]=1;
				}
				for(int k=0;k<cot;k++){
					b[i][k]=1;
				}
			}
		}
	}
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
}
