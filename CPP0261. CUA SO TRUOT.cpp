#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    cin>>m;
    int b[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)  cin >> b[i][j];
    }
    int x[n][n] = {0};
    for (int i = 0; i <= n - m; i += m) {
        for (int j = 0; j <= n - m; j += m) {
            for (int c = 0; c <= m - 1;c++) {
                for (int d = 0; d <= m - 1;d++) x[c + i][d + j] = a[c + i][d + j] * b[c][d];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << x[i][j] << " ";
        cout << endl;
    }
} 