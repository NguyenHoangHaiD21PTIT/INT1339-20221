#include<bits/stdc++.h>
using namespace std;
void cong(string a, string b){
	int n1=a.size();
    int n2=b.size();
    int x[n1], y[n1], z[n1+1];//x, y: mang luu cac so trong a, b; z: mang luu cac so trong tong
    for(int i=0;i<n1;i++){
    	x[i]=a[i]-'0';
    }
    for(int i=0;i<n2;i++){
    	y[i]=b[i]-'0';
    }
    reverse(x,x+n1);reverse(y,y+n2);
    for(int i=n2;i<n1;i++){
    	y[i]=0;
    }
    int n=0, nho=0;//n: so chu so trong phep cong(n=n1 or n=n1+1; nho: bien nho)
    int tmp;
    for(int i=0;i<n1;i++){
        tmp = x[i]+y[i]+nho;
        z[n++]=tmp%10;
        nho=tmp/10;
    }
    if(nho==1){
    	z[n++]=nho;
    }
    for(int i=n-1;i>=0;i--){
    	cout<<z[i];
    }
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		cin>>a>>b;
		if(a.size()>b.size()){
			cong(a,b);
		} else {
			cong(b,a);
		}
		cout<<endl;
	}
}
