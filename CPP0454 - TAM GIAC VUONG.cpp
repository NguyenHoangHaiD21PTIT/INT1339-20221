#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		vector<long long>v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]*a[i]);
		}
		sort(v.begin(),v.end());
		int check=0;
		for(int i=n-2;i>=2;i--){
			int l=0, r=i-1;
			while(l<r){
				if(a[l]+a[r]==a[i]){
					check=1;
					break;
				} else if(a[l]+a[r]<a[i]){
					l++;
				} else {
					r--;
				}
			}
		}
		if(check==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}