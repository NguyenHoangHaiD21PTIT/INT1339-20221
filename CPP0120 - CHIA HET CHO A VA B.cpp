#include<bits/stdc++.h>
using namespace std;
long long souoc(long long a, long long b, long long n){//a va b la 2 can cua doan[a;b], n la so can xet uoc
    double p1=(double)a/n;
    double p2=(double)b/n;
    long long p3=(int)p1;//Lay phan nguyen [a/n]
    long long p4=(int)p2;//Lay phan nguyen [b/n]
    /*TH1: p1=p3, mien nghiem se nam trong khoang [p3;p4]
      TH2: p1!=p3, tuc la p1 la so thap phan, mien nghiem la [p3+1;p4]
    Nhu vay ung voi 2 TH
    TH1: p3>p4 va TH2: p3+1>p4 thi pt ng k vo nghiem */
    if(p1==p3){
    	if(p3>p4){
    		return 0;
    	} else {
    		return p4-p3+1;
    	}
    } else {
    	if(p3+1>p4){
    		return 0;
    	} else {
    		return p4-(p3+1)+1;
    	}
    }
}
long long lcm(long long a, long long b){
	long long n=a*b;
	return n/__gcd(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a, b;//2 can cua doan [a;b]
		cin>>a>>b;
		long long m, n;//2 so can xet uoc
		cin>>m>>n;
		long long p=lcm(m, n);
		if(a>b){
			swap(a,b);
		}
		if(m>n){
			swap(m,n);
		}
		long long p1=souoc(a,b,m);//so uoc cua m trong [a;b]
		long long p2=souoc(a,b,n);//so uoc cua n trong [a;b]
		long long p3=souoc(a,b,p);//so uoc cua BCNN(m,n) trong [a;b]
		cout <<p1+p2-p3;
		cout<<endl;
	}
}
		
		
    		
    
