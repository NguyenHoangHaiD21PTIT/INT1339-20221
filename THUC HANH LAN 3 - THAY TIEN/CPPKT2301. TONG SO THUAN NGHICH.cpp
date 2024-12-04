#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll a, ll b) { //Tổng liên tiếp từ a đến b
	int n = b - a + 1;
	return n * (b + a) / 2;
}

int main() {
	int n;
	cin >> n;
	ll tong = 0, k = n / 2;
	ll left = pow(10, k - 1), right = pow(10, k) - 1, tmp = pow(10, k - 1) - 1;
	if (n % 2 == 0) tong = sum(left, right) * pow((ll)10, k) + sum(1, right) - sum(1, tmp) * 10;
	else tong = sum(left * 10, right * 10 + 9) * pow((ll)10, k) + (sum(1, right) - sum(1, tmp) * 10) * 10;
	cout << tong << endl;
}
/*
Ví dụ số có 6 chữ số. Ban đầu sẽ có 900 số [sum(10^2, 999) * 1000] (k = 3)
100 000
101 000
...
999 000 
Như vậy thì 900 phần đầu tương ứng với nó sẽ ghép với 900 số đảo có 3 chữ số cộng vào. Mỗi một phần đầu thì chỉ có 1 số đảo ghép được
Ví dụ: 123 000 --> 123 000 + 321
Tuy nhiên, những phần đuôi chứa số 0 sẽ không thể ghép với bất kỳ số nào, vì đảo lại thì ra 0 ở đầu (Vô lí), đây chính là những số ít hơn rìght 1 chữ số nhân với 10
*/
