#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string manv="00001";
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string masothue;
    string ngayky;
};
void nhap(NhanVien &a){
	getline(cin, a.hoten);
	cin >>a.gioitinh;
	cin>>a.ngaysinh;
	cin.ignore();
	getline(cin, a.diachi);
	cin>>a.masothue;
	cin>>a.ngayky;
}
void in(NhanVien a){
	cout << a.manv <<" "<< a.hoten <<" "<< a.gioitinh <<" " << a.ngaysinh << " "<<a.diachi << " " <<a.masothue <<" " << a.ngayky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
