#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int Max = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] == Max) {
                a.insert(a.begin() + i, m);
                break;
            }
        }
        vector<int> b, c;
        for (int i : a) {
            if (i < 0)  b.push_back(i);
            else c.push_back(i);
        }
        for (int i : b) cout << i << " ";
        for (int i : c) cout << i << " ";
        cout << endl;
    }
}
