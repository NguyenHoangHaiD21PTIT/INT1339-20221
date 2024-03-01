#include<bits/stdc++.h>
using namespace std;
float band(int n){//quy doi so cau nghe-doc dung sang thang 9
	float b;
	if(n==3||n==4){
		b=2.5;	
	} else if(n==5||n==6){
		b=3.0;
	} else if(n>=7&&n<=9){
		b=3.5;
	} else if(n>=10&&n<=12) {
		b=4.0;
	} else if(n>=13&&n<=15) {
		b=4.5;
	} else if(n>=16&&n<=19) {
		b=5.0;
	} else if(n>=20&&n<=22) {
		b=5.5;
	} else if(n>=23&&n<=26) {
		b=6.0;
	} else if(n>=27&&n<=29) {
		b=6.5;
	} else if(n>=30&&n<=32) {
		b=7.0;
	} else if(n==33||n==34){
		b=7.5;
	} else if(n==35||n==36){
		b=8.0;
	} else if(n==37||n==38){
		b=8.5;
	} else if(n==39||n==40){
		b=9.0;
	}
	return b;
}
float lamtron(float x){//x: phan thap phan
	if(x==0.25||x==0.375||x==0.625){
		x=0.5;
	} else if(x==0.75||x==0.875){
		x=1.0;
	} else if(x==0.125){
		x=0.0;
	}
	return x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int nghe, doc;
		cin>>nghe>>doc;
		float noi, viet;
		cin>>noi>>viet;
		float tbc=(float)(band(nghe)+band(doc)+noi+viet)/4.0;
		int nguyen=(int)tbc;
		float le=tbc-(float)nguyen;
		float tbcfinal=(float)nguyen+lamtron(le);
		cout<<fixed<<setprecision(1)<<tbcfinal<<endl;
	}
}
