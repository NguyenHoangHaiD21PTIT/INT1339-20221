#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		long long k; cin >> k;
		int x=n/k;//so cum = [n/k];
		int r=n%k;
		long long tong1=(k*(k-1))/2;
		long long tong2=(r*(r+1))/2;
		long long S=tong1*x+tong2;
		if(S==k){
			cout <<"1" << endl;
		} else {
			cout << "0" << endl;
		}
    }
}
