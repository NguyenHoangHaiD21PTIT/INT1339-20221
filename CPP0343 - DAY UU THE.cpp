#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n=0;//n la so pahn tu, tang tu dong
	char c=' ';
	int demchan=0, demle=0;
	while(c==' '){
/*Cu nhap 1 so thi cach ra de nhap so tiep theo, nen khi khong cach nua thi
la xuong dong*/
        int a;
        cin>>a;// Nhap a tuc nhap tung phan tu cua mang
        if(a%2==0){
        	demchan++;
        } else {
        	demle++;
        }
        n++;//Nhap xong 1 so thi phai tang so phan tu them 1
        c=getchar();//Nhan Enter la stop vong lap
    }
    if((n%2==0&&demchan>demle)||(n%2==1&&demchan<demle)){
    	cout<<"YES"<<endl;
    } else {
    	cout<<"NO"<<endl;
    }
}
}
