#include<bits/stdc++.h>
using namespace std;
struct so{
	int giatri;
	int tritd;
	int chiso;
};
bool cmp(so a, so b){
	if(a.tritd!=b.tritd){
		return a.tritd<b.tritd;
	}
	return a.chiso<b.chiso;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		so a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].giatri;
			a[i].tritd=abs(x-a[i].giatri);
			a[i].chiso=i;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i].giatri<<" ";
		}
		cout<<endl;
	}
}

