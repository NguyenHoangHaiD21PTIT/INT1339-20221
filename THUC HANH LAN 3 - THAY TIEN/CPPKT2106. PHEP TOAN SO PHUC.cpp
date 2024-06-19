#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
	int thuc, ao;
};
SoPhuc tong(SoPhuc a, SoPhuc b){
	SoPhuc d;//d=a+b
	d.thuc=a.thuc+b.thuc;
	d.ao=a.ao+b.ao;
	return d;
}
SoPhuc binh_phuong_tong (SoPhuc a, SoPhuc b){
	SoPhuc c=tong(a,b);
	SoPhuc d;//(a+b)^2;
	d.thuc=c.thuc*c.thuc-c.ao*c.ao;
	d.ao=2*c.thuc*c.ao;
	return d;
}
void hien_thi(SoPhuc a){
	cout<<a.thuc<<" + "<<a.ao<<"i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
