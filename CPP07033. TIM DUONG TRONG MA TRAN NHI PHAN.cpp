#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int sx, sy, ex, ey, m, n;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int d[1005][1005], visited[1005][1005];

int BFS(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = 1;
    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        int x = top.first, y = top.second;
        if (x == ex && y == ey) return d[ex][ey];
        for (int k = 0; k < 4; k++) {
            int i1 = x + dx[k];
            int j1 = y + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] && !visited[i1][j1]) {
                d[i1][j1] = d[x][y] + 1;
                q.push({i1, j1});
                visited[i1][j1] = 1;
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m >> sx >> sy >> ex >> ey;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> a[i][j];
            }
        }
        memset(visited, 0, sizeof(visited));
        memset(d, 0, sizeof(d));
        if (sx == ex && sy == ey) {
            cout << 0 << endl;
        } else if (a[sx][sy] && a[ex][ey]) {
            int result = BFS(sx, sy);
            cout << result << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
