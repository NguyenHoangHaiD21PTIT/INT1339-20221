#include<bits/stdc++.h>

using namespace std;

class Point {
public:
	int x, y, z;
	double distance;
	friend istream& operator >> (istream& input, Point& a) {
		input >> a.x >> a.y;
		return input;
	}
	friend double operator - (Point a, Point b) {
		double dis = sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2));
		return dis;
	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {	
		Point A, B;
		cin>>A>>B;
		cout << setprecision(2) << fixed << A - B << endl;
	}
	return 0;
}