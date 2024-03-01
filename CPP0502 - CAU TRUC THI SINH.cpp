#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hoten;
	string ngaysinh;
	float x1, x2, x3;//diem thi 3 mon
};
void nhap(ThiSinh &a){
	getline(cin, a.hoten);
	cin>>a.ngaysinh;
	cin>>a.x1>>a.x2>>a.x3;
}
void in(ThiSinh a){
	cout<<a.hoten<<" " <<a.ngaysinh<<" "<<fixed<<setprecision(1)<<a.x1+a.x2+a.x3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
