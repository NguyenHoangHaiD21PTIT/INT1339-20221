#include<bits/stdc++.h>
using namespace std;
struct giaovien{
	string ma, hoten;
	int luongcb;
	int heso;
	int phucap;
};
int hs(giaovien a){
	int x;
	x=(a.ma[2]-'0')*10+(a.ma[3]-'0');
	return x;
}
int pc(giaovien a){
	if(a.ma[0]=='H'&&a.ma[1]=='T'){
		return 2000000;
	} else if (a.ma[0]=='H'&&a.ma[1]=='P'){
		return 900000;
	} else if (a.ma[0]=='G'&&a.ma[1]=='V'){
		return 500000;
	}
}
int main(){
	giaovien a;
	cin>>a.ma;
	cin.ignore();
	getline(cin, a.hoten);
	cin>>a.luongcb;
	a.heso=hs(a);
	a.phucap=pc(a);
	int thunhap=a.luongcb*a.heso+a.phucap;
	cout<<a.ma<<" "<<a.hoten<<" "<<a.heso<<" "<<a.phucap<<" "<<thunhap;
}
