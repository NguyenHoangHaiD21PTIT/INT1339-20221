#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int i=n-2;//Phan tu dung truoc phan tu cuoi cung
		//Tim so lon nhat nho hon n --> Phai tim duoc vi tri dau tien ma ban than no > so sau no
		while(i>=0&&a[i]<a[i+1]){
			i--;
		}
	   	int j=n-1;
	    //Tim so a[j]  trong doan [a[i+1];a[n]] nho nhat va < a[i] roi hoan vi, vi day giam nen cung xet tu cuoi lai
	    while(a[i]<a[j]){
	    	j--;
	    }
	    swap(a[i],a[j]);
	    reverse(a+i+1, a+n);
	    for(int i=0;i<n;i++){
	    	cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
}
