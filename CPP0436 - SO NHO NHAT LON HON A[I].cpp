#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			auto x=upper_bound(v.begin(),v.end(),a[i]);
			if(x!=v.end()){
				cout<<*x<<" ";
			} else {
				cout<<"_ ";
			}
		}
		cout<<endl;
	}
}
