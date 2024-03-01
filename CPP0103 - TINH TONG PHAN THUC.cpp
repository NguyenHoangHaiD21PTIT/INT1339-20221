#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double S=0;
	for(int i=1; i<=n; i++) {
		S+=1/(double)i;
	}
	cout << fixed << setprecision(4) << S;
}

