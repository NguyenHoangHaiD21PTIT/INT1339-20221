#include <bits/stdc++.h>
using namespace std;

struct ToaDo {
    double x, y;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        double sum = 0;
        int n;
        cin >> n;
        vector<ToaDo> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i].x >> a[i].y;
        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;
            sum += (a[i].x * a[j].y - a[i].y * a[j].x);
        }
        cout << fixed << setprecision(3) << abs(sum) / 2 << endl;
    }
    return 0;
}
