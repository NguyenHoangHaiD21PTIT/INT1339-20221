#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int a[n][3];
	for(int i=0; i<n; i++) {
		for(int j=0; j<3; j++) {
			cin >> a[i][j];
		}
	}
	int dem_hang=0;
	for(int i=0; i<n; i++) {
		int dem_so1=0;
		for(int j=0; j<3; j++) {//dem so so 1 o moi hang
			if (a[i][j] ==1) {
				dem_so1++;
			}
		}
		if (dem_so1 >=2){
			dem_hang++;
		}
	}
	cout << dem_hang;
}
