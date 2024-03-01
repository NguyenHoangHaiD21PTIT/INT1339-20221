#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int check=1;//kiem tra xem so thua so nao xh>=2 lan
		int dem1=0;//dem so luong thua so nguyen to chi xuat hien 1 lan
		for(int i=2;i<=sqrt(n);i++){
		    int dem2=0;
			if(n%i==0){
			    //dem so lan xuat hien
				while(n%i==0){
					dem2++;
					n=n/i;
				}
			}
			if(dem2>=2){
				check=0;
				break;
			}
			if(dem2==1){
				dem1++;
			}
		}
		if(n!=1){//Khong loai tru uoc snt cuoi cung
			dem1++;		
		}
		if(check==0){
			cout<<"NO"<<endl;
		} else {
			if(dem1==3){
				cout<<"YES"<<endl;
			} else {
				cout <<"NO"<<endl;
			}
		}
	}
}
