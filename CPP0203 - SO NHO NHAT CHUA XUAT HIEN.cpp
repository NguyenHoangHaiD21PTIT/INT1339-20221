#include<bits/stdc++.h>
using namespace std;
int dem[100000]={};
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(dem, 0, sizeof(dem));
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]>0){
				dem[a[i]]++;//da xuat hien
			}
		}
		for(int i=1;i<=1000001;i++){
			if(dem[i]==0){
			    cout << i ;
			    break;
			}
		}
		cout << endl;
	}
}
				
