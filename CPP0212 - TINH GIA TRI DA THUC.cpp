#include<bits/stdc++.h>
using namespace std;
const int MOD =1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int a[n];
		long long giatri=0, res=0, lt=1;//gia tri la gia tri da thuc, res la gia tri cua x khi thay vao tung don thuc
	    //lt tang dan: VD: x^0 sang don thuc thu 2 la x^1, x^2,....
	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    }
	    for(int i=n-1;i>=0;i--){
	    	res=a[i]*lt;//tinh gia tri tung don thuc
	    	giatri=giatri+res;//cong don gia tri da thuc
	    	giatri=giatri%MOD;
	    	lt=lt*x;//Het 1 da thuc tang so mu cua x len
	    	lt%=MOD;
	    }
	    cout<<giatri<<endl;
	}
}
