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
bool timkiem(string s1, string s2){//s1: xau ban dau, s2: cum tim kiem
	string s3=s1;
	string s4=s2;
	for(int i=0;i<s3.size();i++){
		s3[i]=tolower(s3[i]);
	}
	for(int i=0;i<s4.size();i++){
		s4[i]=tolower(s4[i]);
	}
	return s3.find(s4)!=string::npos;//string::npos tuc la khong tim thay
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
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline (cin, s);
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if(timkiem(ds[i].hoten, s)){
				cout <<ds[i].magv<<" "<<ds[i].hoten<<" "<<ds[i].monvtat<<endl;
			}
		}
	}
}
		
		
	

		
		

