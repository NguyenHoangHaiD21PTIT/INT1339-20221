#include<bits/stdc++.h>
using namespace std;
struct phuongtien{
	string bienso, loai, status, ngay;
	int soghe;
	int dongia;
};
int solve(phuongtien a){
		if(a.loai=="Xe_con"){
			if(a.soghe==5){
				return 10000;
			} else if (a.soghe==7){
				return 15000;
			}
		} else if (a.loai=="Xe_tai"){
			return 20000;
		} else if (a.loai=="Xe_khach"){
			if(a.soghe==29){
				return 50000;
			} else if (a.soghe==45){
				return 70000;
			}
		}
}
int main(){
	int n;
	cin>>n;
	phuongtien a[n];
	set<string>date;
	for(int i=0;i<n;i++){
		cin>>a[i].bienso;
		cin>>a[i].loai;
		cin>>a[i].soghe;
		cin>>a[i].status;
		cin>>a[i].ngay;
		date.insert(a[i].ngay);
		a[i].dongia=solve(a[i]);
	}
	long long tong=0;
	for(auto x:date){
		for(int i=0;i<n;i++){
			if(a[i].ngay==x&&a[i].status=="IN"){
				tong+=a[i].dongia;
			}
		}
		cout<<x<<": "<<tong<<endl;
		tong=0;
	}
}
