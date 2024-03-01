#include<bits/stdc++.h>
using namespace std;
struct tgian{
	int gio, phut, giay;
	int tong;
};
bool cmp(tgian a, tgian b){
	a.tong=a.gio*3600+a.phut*60+a.giay;
	b.tong=b.gio*3600+b.phut*60+b.giay;
	if(a.tong!=b.tong){
		return a.tong<b.tong;
	}
}
int main(){
	int n;
	cin>>n;
	tgian a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].gio>>a[i].phut>>a[i].giay;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].gio<<" "<<a[i].phut<<" "<<a[i].giay<<endl;
	}
}
	
