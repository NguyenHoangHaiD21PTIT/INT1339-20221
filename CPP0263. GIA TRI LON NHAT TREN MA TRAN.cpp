#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    int diag1_sum[n][n];//diag1_sum[i][j] = a[0][0] + a[1][1] + ... + a[i][j], đường chéo chính
    int diag2_sum[n][n];//diag2_sum[i][j] = a[0][n - 1] + a[1][n - 2] + ... + a[i][j], đường chéo phụ

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j];
    }

    // Tính tổng các đường chéo chính
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) diag1_sum[i][j] = a[i][j];
            else diag1_sum[i][j] = a[i][j] + diag1_sum[i-1][j-1];
        }
    }

    // Tính tổng các đường chéo phụ
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= 0; --j) {
            if (i == 0 || j == n - 1) diag2_sum[i][j] = a[i][j];
            else diag2_sum[i][j] = a[i][j] + diag2_sum[i-1][j+1];
        }
    }

    int ans = INT_MIN;

    // Duyệt qua tất cả các kích thước ma trận vuông con từ 1 đến n
    for (int size = 1; size <= n; ++size) {
        // Duyệt qua tất cả các ma trận vuông con có kích thước `size`. Điểm bắt đầu nhỏ nhất là (0, 0). 
        for (int i = 0; i <= n - size; ++i) {
            for (int j = 0; j <= n - size; ++j) {
                int diag1 = diag1_sum[i + size - 1][j + size - 1];
                if (i > 0 && j > 0) diag1 -= diag1_sum[i - 1][j - 1];

                int diag2 = diag2_sum[i + size - 1][j];
                if (i > 0 && j + size < n) diag2 -= diag2_sum[i - 1][j + size];

                int value = diag1 - diag2;
                ans = max(ans, value);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
/*
0, 0                                                                         0, n - 1
   ....                                                                   ...... 
    i - 1, j - 1                                                   i, j + size                
        ____________________________________________________________________
            i, j                                          i, j + size - 1
                        i + 1, j + 1             i - 1, j + sz - 2
                                    i + 2, j + 2
                                        /... 
                                                /...
            i+ size - 1, j                               i + size - 1, j + size - 1                                                 
*/
