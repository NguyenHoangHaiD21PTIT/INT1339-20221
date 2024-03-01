#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b){//Tim BCNN 2 so
	long long n=a*b;
	return n/__gcd(a,b);
}
long long BCNN(long long x, long long y, long long z){
	return lcm(lcm(x,y),z);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x, y, z;
		cin>>x>>y>>z;
		long long n;
		cin>>n;
		long long p1=pow(10, n-1);
		long long p2=pow(10, n)-1;
		long long p=BCNN(x,y,z);
		//Tim so nguyen duong nho nhat >=p1 va chia het cho p
		long long p3=((p1+p-1)/p)*p;
		//So nho nhat co n chu so, la boi cua p, tuc gan voi 10^(n-1) nhat
		if(p>p2){
			cout<<"-1"<<endl;
		} else {
			cout<<p3<<endl;
		}
	}
}
	
