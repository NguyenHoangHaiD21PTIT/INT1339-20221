#include<bits/stdc++.h>
using namespace std;
struct gv{
	string magv, hoten, lastname, mon, monvtat;
};
string chuanmon(string s1){//Chuan hoa ten mon
	stringstream s2(s1);
	string token;
	string s3="";//luu
	while(s2>>token){
		s3+=toupper(token[0]);
	}
	return s3;
}
string tencuoi(string s1){//Lay ten cuoi
	stringstream s2(s1);
	string token;
	string s3="";
	while(s2>>token){
		s3=token;
	}
	return s3;
}
bool cmp(gv a, gv b){
	if(a.lastname!=b.lastname){
		return a.lastname<b.lastname;
	}
	return a.magv<b.magv;
}
int main(){
	int n;
	cin>>n;
	scanf("\n");
	gv ds[n];
	for(int i=0;i<n;i++){
		getline(cin, ds[i].hoten);
		getline(cin, ds[i].mon);
		if(i<9){
			ds[i].magv=ds[i].magv+"GV0"+to_string(i+1);
		} else {
			ds[i].magv=ds[i].magv+"GV"+to_string(i+1);
		}
		ds[i].monvtat=chuanmon(ds[i].mon);
		ds[i].lastname=tencuoi(ds[i].hoten);
	}
	sort(ds,ds+n, cmp);
	for(int i=0;i<n;i++){
		cout <<ds[i].magv<<" "<<ds[i].hoten<<" "<<ds[i].monvtat<<endl;
	}
}
		
		
	

		
		

