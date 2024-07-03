#include <bits/stdc++.h>
#define modu 1000000007
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> m(n);
        for (int i = 0; i < n; i++) cin >> m[i];
        int x = m[0];
        for (int i = 1; i < n; i++) x = __gcd(x, m[i]);
        long long sum = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < x; j++) {
                sum = sum * m[i];
                if (sum > modu) sum %= modu;
            }
        }
        cout << sum << endl;
    }
}