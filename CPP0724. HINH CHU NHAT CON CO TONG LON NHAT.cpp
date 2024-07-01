#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long a[n + 1][m + 1];
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        }
        
        long long b[n + 1][m + 1] = {0};
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
        }
        
        long long maxx = -1e9;
        
        //Tính tổng HCN con bắt đầu hàng i, kết thúc hàng k. Bắt đầu hàng j kết thúc hàng h
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                for (int k = i; k <= n; k++) {
                    for (int h = j; h <= m; h++) {
                        maxx = max(maxx, b[k][h] - b[k][j - 1] - b[i - 1][h] + b[i - 1][j - 1]);
                    }
                }
            }
        }
        
        cout << maxx << endl;
    }
}
