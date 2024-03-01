#include<bits/stdc++.h>
using namespace std;
struct toado{
	int x, y, z;
};
void nhap(toado &p){
	cin >>p.x>>p.y>>p.z;
}
toado vecto(toado &A, toado&B){//ham tinh toa do vecto BA
    toado k;//k la vector BA
	k.x=B.x-A.x;
	k.y=B.y-A.y;
	k.z=B.z-A.z;
	return k;
}
toado tch(toado &A, toado&B, toado &C){//Ham tinh tich co huong cua BA va CA
	toado BA=vecto(A,B);//vecto BA
	toado CA=vecto(A,C);//vecto CA
	toado p;//p la tich co huong BA.CA
	p.x=BA.y*CA.z-BA.z*CA.y;
	p.y=BA.z*CA.x-BA.x*CA.z;
	p.z=BA.x*CA.y-BA.y*CA.x;
	return p;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		toado A, B, C, D;
		nhap(A);nhap(B);
		nhap(C);nhap(D);
		//Tinh cac vector
		toado p1=tch(A,B,C);//Tich co huong BA.CA
		toado p2=vecto(A,D);//Tinh vecto DA
		int p0=p1.x*p2.x+p1.y*p2.y+p1.z*p2.z;//tich vo huong sau cung
		if(p0==0){
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
}
		


	
