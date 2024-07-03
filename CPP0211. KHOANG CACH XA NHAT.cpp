#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int ans = INT_MIN;
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i) b[i] = max(b[i + 1], a[i]);
        int l = 0, r = 0;
        while (l < n && r < n) {
            if (a[l] <= b[r]) {
                ans = max(ans, abs(l - r));
                ++r;
            } else {
                ++l;
            }
        }
        cout << ans << endl;
    }

    return 0;
}