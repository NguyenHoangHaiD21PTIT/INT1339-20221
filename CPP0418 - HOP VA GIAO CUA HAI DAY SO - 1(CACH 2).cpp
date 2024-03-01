#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		vector<int>hop(n+m);
		auto h=set_union(a, a+n, b, b+m, hop.begin());
		hop.resize(h-hop.begin());
		for(auto x: hop){
			cout<<x<<" ";
		}
		cout<<endl;
		vector<int>giao(n+m);
		auto g=set_intersection(a, a+n, b, b+m, giao.begin());
		giao.resize(g-giao.begin());
		for(auto y: giao){
			cout<<y<<" ";
		}
		cout<<endl;
	}
}
