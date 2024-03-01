#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	/*Buoc 0: Dat min=a[0]
	Buoc 1: Tai moi vi tri i dang xet, tim phan tu nho nhat cua day tu a[0] den a[i];
	Buoc 2: Neu a[i]>min cua buoc 1 thi hieu do duoc cap nhat thanh a[i]-min */
	    int ptumin=a[0];
	    int kq=-1e9;
	    for(int i=1;i<n;i++){
	    	ptumin=min(a[0],a[i]);//Tim phan tu nho nhat trong day tu a[0] den a[i]
	    	if(a[i]>ptumin){
	    		kq=max(kq,a[i]-ptumin);
	    	}
	    }
	    if(kq==-1e9){
	    	cout<<"-1"<<endl;
	    } else {
	    	cout<<kq<<endl;
	    }
	}
}
	        
