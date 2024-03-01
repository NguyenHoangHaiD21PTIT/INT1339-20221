#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		double xA, yA, xB, yB;
		cin >> xA >> yA >> xB >> yB;
		cout << fixed << setprecision(4) << (double) sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA)) << endl;
	}
}
