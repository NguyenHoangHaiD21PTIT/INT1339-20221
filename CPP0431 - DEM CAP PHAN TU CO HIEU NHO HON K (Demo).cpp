#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		//x-a[i]<k => x<=a[i]+k-1 ==> Tim vi tri dau tien ma > a[i]+k-1--> Upper bound
		long long dem=0;
		for(int i=0;i<n-1;i++){
			auto r=upper_bound(a+i+1,a+n,a[i]+k-1);
			dem+=1ll*(((r-a)-1)-(i+1)+1);//r-a: giai tham chieu
		}
		cout<<dem<<endl;
	}
}