#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop, mail;
};
int main(){
	int n;
	cin>>n;
	cin.ignore();
	SinhVien ds[n];
	for(int i=0;i<n;i++){
		getline(cin, ds[i].msv);
		getline(cin, ds[i].ten);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].mail);
	}
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if(ds[i].lop==s){
				cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].mail;
				cout<<endl;
	    	}
		}
		cout<<endl;
	}
}
