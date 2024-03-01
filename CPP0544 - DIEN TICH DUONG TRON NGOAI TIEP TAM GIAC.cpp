#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct Point{
    double x, y;
};
double distance(Point A, Point B){
	return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Point A, B, C;
		cin>>A.x>> A.y >> B.x >> B.y >> C.x >> C.y;
		double AB,BC,CA;
		AB=distance(A,B);
		BC=distance(B,C);
		CA=distance(A,C);
		if(AB+BC>CA&&BC+CA>AB&&CA+AB>BC){
			double p=(double)(AB+BC+CA)/2;
			double s=(double)sqrt(p*(p-AB)*(p-BC)*(p-CA));//ct herong
			double r=(double)(AB*BC*CA)/(4.0*s);
			cout<<fixed<<setprecision(3)<<PI*r*r<<endl;
		} else {
			cout<<"INVALID"<<endl;
		}
	}
}
			
			
