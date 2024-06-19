#include<bits/stdc++.h>
using namespace std;
struct thisinh{
	string ma, hoten;
	float toan, ly, hoa;
	float uutien;
	float tong1, tong2;
	string trangthai;
};
float diemuutien(thisinh a){
	if(a.ma[2]=='1'){
		return 0.5;
	} else if(a.ma[2]=='2'){
		return 1;
	} else if(a.ma[2]=='3'){
		return 2.5;
	}
}
float diemtong1(thisinh a){
	return a.toan*2+a.ly+a.hoa;
}
float diemtong2(thisinh a){
	return a.toan*2+a.ly+a.hoa+a.uutien;
}
string status(thisinh a){
	string s="";
	if(a.tong2>=24){
		s="TRUNG TUYEN";
	} else {
		s="TRUOT";
	}
	return s;
}
int main(){
	thisinh a;
	cin>>a.ma;
	cin.ignore();
	getline(cin, a.hoten);
	cin>>a.toan>>a.ly>>a.hoa;
	a.uutien=diemuutien(a);
	a.tong1=diemtong1(a);
	a.tong2=diemtong2(a);
	a.trangthai=status(a);
	cout<<a.ma<<" "<<a.hoten<<" "<<a.uutien<<" "<<a.tong1<<" "<<a.trangthai;
}
