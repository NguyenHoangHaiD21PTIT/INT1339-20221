#include <bits/stdc++.h>
using namespace std;

int main() {
    int hang, cot;
    cin >> hang >> cot;

    vector<vector<int>> a(hang, vector<int>(cot));
    vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            cin >> a[i][j];
        }
    }

    int tong = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (a[i][j] == -1) {
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();

        for (int k = 0; k < 8; ++k) {
            int i1 = u.first + dx[k];
            int j1 = u.second + dy[k];

            if (i1 >= 0 && i1 < hang && j1 >= 0 && j1 < cot && a[i1][j1] != 0) {
                tong += a[i1][j1];
                a[i1][j1] = 0;
            }
        }
    }

    cout << tong << endl;

    return 0;
}
