#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		int UCLN= __gcd(a,b);
		long long BCNN= (long long ) a*b/UCLN;
		cout << BCNN << " " << UCLN << endl;
	}
}


