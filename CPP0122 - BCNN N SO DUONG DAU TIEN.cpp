#include<bits/stdc++.h>
using namespace std;
long long BCNN(long long a, long long b){
	long long n = a *b;
	return n/__gcd(a, b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n==1 || n==0){
		    cout << n << endl;
		} else if(n>=2){
		    long long tmp=1;
		    for(long long i=2;i<=n;i++){
	            tmp = BCNN(tmp, i);    
	        }
	        cout << tmp << endl;
	    }
	}
}

		




