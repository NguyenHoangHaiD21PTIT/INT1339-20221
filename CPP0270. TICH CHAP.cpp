#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x[n][m], h[3][3], y[n - 2][m - 2] = {};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> x[i][j];
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) cin >> h[i][j];
        }

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) y[i][j] += h[k][l] * x[i + k][j + l];
                }
            }
        }
        long long res = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) res += y[i][j];
        }
        cout << res << endl;
    }
}
