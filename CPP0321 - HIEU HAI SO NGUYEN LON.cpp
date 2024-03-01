#include<bits/stdc++.h>
using namespace std;
void tru(string a, string b){//ham phep tru, a la so lon b la so be
    int n1=a.size();
    int n2=b.size();
    int x[n1], y[n1], z[n1];//x, y: mang luu cac so trong a, b; z: mang luu cac so trong hieu
    for(int i=0;i<n1;i++){
    	x[i]=a[i]-'0';
    }
    for(int i=0;i<n2;i++){
    	y[i]=b[i]-'0';
    }
    reverse(x,x+n1);reverse(y,y+n2);
    for(int i=n2;i<n1;i++){//chen nhung so 0 vo nghia vao truoc xau ban dau
    	y[i]=0;
    }
    int n=0, muon=0;//n: so chu so trong phep tru(n=n1 or n=n1-1; muon: bien muon)
    int tmp;
    for(int i=0;i<n1;i++){
        tmp = x[i] - y[i]- muon;
        if(tmp<0){
        	muon=1;
        	z[n++]=tmp+10;
        } else {
        	muon=0;
        	z[n++]=tmp;
        }
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
			tru(a,b);
		} else {
			tru(b,a);
		}
		cout<<endl;
	}
}
