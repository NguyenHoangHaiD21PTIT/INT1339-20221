#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int dem=0;
		map<int, int>mp;
		for(int i=0;i<n;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(mp[a[i]]>=2){
				dem+=mp[a[i]];
			}
			mp[a[i]]=0;
		}
		cout << dem << endl;
	}
}
