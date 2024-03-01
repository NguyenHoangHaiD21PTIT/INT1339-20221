#include<bits/stdc++.h>
using namespace std;
struct nguoi{
	string ten,ns;
	int ngay, thang, nam;
};
bool cmp(nguoi a, nguoi b){
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
	b.nam=(b.ns[6]-'0')*1000+(b.ns[7]-'0')*100+(b.ns[8]-'0')*10+(b.ns[9]-'0');
	a.thang=(a.ns[3]-'0')*10+(a.ns[4]-'0');
	b.thang=(b.ns[3]-'0')*10+(b.ns[4]-'0');
	a.ngay=(a.ns[0]-'0')*10+(a.ns[1]-'0');
	b.ngay=(b.ns[0]-'0')*10+(b.ns[1]-'0');
	if(a.nam!=b.nam){
		return (a.nam<b.nam);
	}
	if(a.thang!=b.thang){
		return (a.thang<b.thang);
	}
	return a.ngay<b.ngay;
}
int main(){
	int n;
	cin>>n;
	nguoi a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].ten>>a[i].ns;
	}
	sort(a,a+n, cmp);
	cout<<a[n-1].ten<<endl<<a[0].ten;
}
