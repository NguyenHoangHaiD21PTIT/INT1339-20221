#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mt[n][n];
        int tong = 0;

        // Nhập ma trận và tính tổng tất cả các phần tử
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mt[i][j];
                tong += mt[i][j];
            }
        }

        int hang[n], cot[n];
        memset(hang, 0, sizeof(hang));
        memset(cot, 0, sizeof(cot));

        // Tính tổng các hàng và tổng các cột
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                hang[i] += mt[i][j];
                cot[j] += mt[i][j];
            }
        }

        // Tìm tổng lớn nhất của hàng và cột
        int sln = 0;
        for (int i = 0; i < n; i++) {
            sln = max(sln, hang[i]);
            sln = max(sln, cot[i]);
        }

        // Tính số phép biến đổi cần thiết
        cout << sln * n - tong << endl;
    }
}
