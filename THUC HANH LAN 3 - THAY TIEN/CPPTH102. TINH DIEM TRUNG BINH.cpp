#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	double x=*max_element(a,a+n);
	double y=*min_element(a,a+n);
	int dem=0;
	double tong=0;
	for(int i=0;i<n;i++){
		if(a[i]!=x&&a[i]!=y){
			tong+=a[i];
			dem++;
		}
	}
	cout<<fixed<<setprecision(2)<<tong/(1.0*dem);
}
