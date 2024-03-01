#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend istream& operator >> (istream &in, PhanSo &p);
		friend ostream& operator << (ostream &out, PhanSo p);
		void rutgon();
};
PhanSo::PhanSo(long long tu, long long mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator >> (istream& in, PhanSo &a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator <<(ostream& out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
void PhanSo::rutgon(){
	long long l=__gcd(tu, mau);
	tu/=l;
	mau/=l;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
