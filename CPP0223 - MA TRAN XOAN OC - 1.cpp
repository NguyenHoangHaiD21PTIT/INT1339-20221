#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int hang, cot;
		cin>>hang>>cot;
		int a[hang][cot];
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				cin>>a[i][j];
			}
		}
		int hang1=0, hang2=hang-1, cot1=0, cot2=cot-1;
		while(hang1<=hang2&&cot1<=cot2){
			//1. In hang dau
			for(int j=cot1;j<=cot2;j++){
				cout<<a[hang1][j]<<" ";
			}
			hang1++;//Bo phan tu dau tien cot cuoi
			//2. In cot cuoi
			for(int i=hang1;i<=hang2;i++){
				cout<<a[i][cot2]<<" ";
			}
			cot2--;//bo phan tu cuoi cua hang &cot cuoi
			//3. In hang cuoi
			if(hang1<=hang2){
				for(int j=cot2;j>=cot1;j--){
					cout<<a[hang2][j]<<" ";
				}
			}
			hang2--;//bo phan tu dau tien hang cuoi
			if(cot1<=cot2){
				for(int i=hang2;i>=hang1;i--){
					cout<<a[i][cot1]<<" ";
				}
			}
			cot1++;
		}
		cout<<endl;
	}
}