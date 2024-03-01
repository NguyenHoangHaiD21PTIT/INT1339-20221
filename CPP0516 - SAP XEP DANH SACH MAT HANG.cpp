#include<bits/stdc++.h>
using namespace std;
//1. Khai bao struct
struct mathang{
	string ten, nhom;
	double mua, ban;
	int stt;
	double profit;
};
//2. Nhap va xu li: STT va profit
void nhap(mathang ds[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhom);
		cin>>ds[i].mua>>ds[i].ban;
		ds[i].profit=ds[i].ban-ds[i].mua;
		ds[i].stt=i+1;
	}
}
//3. Sap xep theo tieu chi
bool cmp(mathang a, mathang b){
	if(a.profit!=b.profit){
		return a.profit>b.profit;
	}
}
//4. Ham sap xep co san
void sapxep(mathang ds[], int n){
	sort(ds,ds+n,cmp);
}
//5. In
void in(mathang ds[], int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].nhom<<" "<<fixed<<setprecision(2)<<ds[i].profit<<endl;
	}
}
//6. Ham main(){
int main(){
	int n;
	cin>>n;
	struct mathang ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
	
