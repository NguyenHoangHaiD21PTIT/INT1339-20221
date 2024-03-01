#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s[t];
	int dem=0;//dap an bai toan
	for(int i=0;i<t;i++){
		cin>>s[i];
	}
	for(int i=0;i<t;i++){
		//Voi moi mat khau ta phai duyet tat ca cac phan tu khac no tu dau day
		for(int j=0;j<t;j++){
			if(i!=j){
				if(s[i].find(s[j])!=string::npos){
					dem++;	
				}
			}
		}
	}	
	cout<<dem;
}