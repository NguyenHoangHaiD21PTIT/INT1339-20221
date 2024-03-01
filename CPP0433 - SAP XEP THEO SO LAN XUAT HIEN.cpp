#include<bits/stdc++.h>
using namespace std;
int dem[100500]={};
bool cmp(int a, int b){
	if(dem[a]!=dem[b]){
		return dem[a]>dem[b];
	}
	return a<b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(dem,0,sizeof(dem));
		int n;
		cin>>n;
		int a[n];
		vector<int>v;
	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    	if(dem[a[i]]==0){
	    		v.push_back(a[i]);
			}
			dem[a[i]]++;
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++){
			for(int j=1;j<=dem[v[i]];j++){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
}
