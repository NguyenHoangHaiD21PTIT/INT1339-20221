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
	cin >> t;
	while(t--){
		int n, x;
		cin>> n >>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(tknp(a,n,x)==-1){
			cout<<"-1"<<endl;
		} else {
			cout<<"1"<<endl;
		}
	}
}
			
