#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, b;
    cin >> n >> k >> b;
    int a[n + 1] = {}; // Mảng đánh dấu đèn bị hỏng
    for (int i = 0; i < b; i++) {
        int x; 
        cin >> x;
        a[x] = 1;
    }
    int current_broken = 0; // Số đèn hỏng trong cửa sổ hiện tại
    for (int i = 1; i <= k; i++) current_broken += a[i];
    int min_broken = current_broken;
    for (int i = k + 1; i <= n; i++) {
        current_broken += a[i] - a[i - k];
        min_broken = min(min_broken, current_broken);
    }
    cout << min_broken << endl;
    return 0;
}
