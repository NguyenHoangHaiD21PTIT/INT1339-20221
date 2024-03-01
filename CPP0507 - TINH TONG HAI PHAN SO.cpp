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
void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}
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
void in(PhanSo a){
	cout <<a.tu<<"/"<<a.mau<<endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
