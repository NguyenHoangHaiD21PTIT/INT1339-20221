#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b){
	long long l=(long long)a*b/__gcd(a,b);
	return l;
}
struct PhanSo{
	long long tu;
	long long mau;
};
void rutgon(PhanSo &p){
	long long l=__gcd(p.tu, p.mau);
	p.tu/=l;
	p.mau/=l;
}
PhanSo tong(PhanSo p, PhanSo q){
	PhanSo s;
	long long mchung=lcm(p.mau,q.mau);
	p.tu=mchung/p.mau*p.tu;
	q.tu=mchung/q.mau*q.tu;
	s.tu=p.tu+q.tu;
	s.mau=mchung;
	rutgon(s);
	return s;
}
PhanSo tich(PhanSo p, PhanSo q){
	PhanSo s;
	s.tu=p.tu*q.tu;
	s.mau=p.mau*q.mau;
	rutgon(s);
	return s;
}
void process(PhanSo &a, PhanSo &b){
	PhanSo c=tich(tong(a,b),tong(a,b));//(a+b)^2
	PhanSo d=tich(c,tich(a,b));//abc
	rutgon(c);
	rutgon(d);
	cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau;
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

