#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long tong = n*(n+1)/2 ;
		cout << tong << endl;
	}
}

