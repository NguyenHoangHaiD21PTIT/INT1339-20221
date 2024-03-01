#include<bits/stdc++.h>
using namespace std;
int nt[1000000];
void sang(){
	for(int i=1;i<=1000001;i++){
		nt[i]=1;//gia su ban dau tat cac la snt
	}
	nt[1]=nt[0]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(nt[i]==1){//i la snt thi tat ca cac boi cua i khong la snt
			for(int j=i*i;j<=1000000;j+=i){
				nt[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		long long x, y;
		cin >> x>>y;
		double x1=sqrt(x);
		double x2=(int) x1;
		double y1=sqrt(y);
		double y2=(int) y1;
		long long dem =0;
	    if(x1==x2){
	        for(long long i=x2;i<=y2;i++){
	       	    if(nt[i]==1){
	       	    	dem++;
				}
		    }
	        cout<<dem<<endl;
	    } else if (x1!=x2){
	    	for(long long i=x2+1;i<=y2;i++){
	       	    if(nt[i]==1){
	       	    	dem++;
				}
		    }
		    cout<<dem<<endl;
	    }
	}
}

