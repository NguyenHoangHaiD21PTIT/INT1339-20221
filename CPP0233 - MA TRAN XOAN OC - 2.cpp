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
		vector<int>v;
		while(hang1<=hang2&&cot1<=cot2){
			//1. In hang dau tien
			for(int j=cot1;j<=cot2;j++){
				v.push_back(a[hang1][j]);
			}
			hang1++;//bo qua phan tu dau tien cua cot ngoai cung
			//2. In cot ngoai cung
			for(int i=hang1;i<=hang2;i++){
				v.push_back(a[i][cot2]);
			}
			cot2--;//bo qua phan tu cuoi cua hang ngoai cung
			//3. In hang duoi cung
			if(hang1<=hang2){
				for(int j=cot2;j>=cot1;j--){
					v.push_back(a[hang2][j]);
				}
			}
			hang2--;
			//4. In cot dau tien
			if(cot1<=cot2){
				for(int i=hang2;i>=hang1;i--){
					v.push_back(a[i][cot1]);
				}
			}
			cot1++;
		}
		//In theo thu tu nguoc lai
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}