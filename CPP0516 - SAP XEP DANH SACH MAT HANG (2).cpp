#include<bits/stdc++.h>
using namespace std;
struct mathang{
	string ten, nhom;
	double mua, ban;
	int stt;
	double loinhuan;
};
//2. Nhap
void nhap(mathang ds[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhom);
		cin>>ds[i].mua>>ds[i].ban;
	}
}
//3. Gan stt, tinh loi nhuan
void solve(mathang ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].stt=i+1;
		ds[i].loinhuan=ds[i].ban-ds[i].mua;
	}
}
//4. Sap xep theo tieu chi
bool cmp(mathang a, mathang b){
	if(a.loinhuan!=b.loinhuan){
		return a.loinhuan>b.loinhuan;
	}
}
void sapxep(mathang ds[], int n){
	solve(ds,n);
	sort(ds,ds+n,cmp);
}
//5. In
void in(mathang ds[], int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].stt<<" "<<ds[i].ten<<" "<<ds[i].nhom<<" "<<fixed<<setprecision(2)<<ds[i].loinhuan<<endl;
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
	
