#include<bits/stdc++.h>
using namespace std;
int vitridau(int l, int r, int a[], int x){
	int kq=-1;//vitri dau tien ma =x
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			kq=mid;
			r=mid-1;
		} else if (a[mid]<x){
			l=mid+1;//tim nua phai
		} else {
			r=mid-1;//tim nua trai
		}
	}
	return kq;
}
int vitricuoi(int l, int r, int a[], int x){
	int kq=-1;//vitri dau tien ma =x
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			kq=mid;
			l=mid+1;
		} else if (a[mid]<x){
			l=mid+1;//tim nua phai
		} else {
			r=mid-1;//tim nua trai
		}
	}
	return kq;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		//tim vi tri dau tien cua phan tu k-a[i]
		int kq=0;
		for(int i=0;i<n-1;i++){
			int dau=vitridau(i+1,n-1,a,k-a[i]);
			int cuoi=vitricuoi(i+1,n-1,a,k-a[i]);
			if(dau!=-1&&cuoi!=-1){
				kq+=cuoi-dau+1;
			}
		}
		cout<<kq<<endl;
	}
}

