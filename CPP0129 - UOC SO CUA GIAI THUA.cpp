#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, p;
		cin>>n>>p;
		int dem=0;
		/* n!=1.2.3. ... . n. Do do, ta xet trong moi so tu 1 den n thi p co the xuat hien nhieu nhat bao nhieu lan va cong don */
		for(int i=1;i<=n;i++){
			int tmp=i;
			while(tmp%p==0){
		        dem++;
				tmp=tmp/p;
			}
		}
		cout<<dem<<endl;
	}
}		
