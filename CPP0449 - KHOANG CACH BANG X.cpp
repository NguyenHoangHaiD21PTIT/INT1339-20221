#include<bits/stdc++.h>
using namespace std;
int tknp(int a[], int n, int x) {//tim kiem nhi phan
    int r = n - 1; 
    int l = 0; 
    while (r >= l) {
        int mid = l + (r - l) / 2; 
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            r = mid - 1;
        if (a[mid] < x)
            l = mid + 1;
    }
    return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=0;
		for(int i=0;i<n;i++){
			if(tknp(a,n,a[i]+k)!=-1){
				check=1;
				break;
			}
		}
		if(check==1){
			cout<<"1"<<endl;
		} else {
			cout<<"-1"<<endl;
		}
	}
}
