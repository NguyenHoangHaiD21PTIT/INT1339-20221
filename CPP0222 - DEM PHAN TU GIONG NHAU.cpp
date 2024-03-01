#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		map<int,int> m;
		int dem1=0;
		int a[n][n];
		for(int i=0;i<n;i++){
			set<int> s;
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				s.insert(a[i][j]);
			}
			for(int x:s){
				m[x]++;
			}
		}
		set<int>s1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(m[a[i][j]]==n){
					s1.insert(a[i][j]);
					m[a[i][j]]=0;
				}
			}
		}
		cout<<s1.size()<<endl;
	}
}