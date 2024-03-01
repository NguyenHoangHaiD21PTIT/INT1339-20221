#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b){
	long long n=a*b;
	return n/__gcd(a,b);
}
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
};
PhanSo::PhanSo(long long tu, long long mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator >> (istream &in, PhanSo &a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream &out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
    return out;
}
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1,1);
	long long l=lcm(a.mau, b.mau);
	a.tu*=l/a.mau;
	b.tu*=l/b.mau;
	tong.tu=a.tu+b.tu;
	tong.mau=l;
	long long k=__gcd(tong.tu, tong.mau);
	tong.tu/=k;
	tong.mau/=k;
	return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

