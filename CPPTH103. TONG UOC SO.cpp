#include <bits/stdc++.h>
using namespace std;

vector<int> minPrime(2000005, 0);

void findMinPrime() {
    for (int i = 2; i * i <= 2000000; ++i) {
        if (minPrime[i] == 0) {
            for (int j = i * i; j <= 2000000; j += i) {
                if (minPrime[j] == 0) {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= 2000000; ++i) {
        if (minPrime[i] == 0) {
            minPrime[i] = i;
        }
    }
}

int main() {
    findMinPrime();
    int t;
    cin >> t;
    long long res = 0;
    while (t-- > 0) {
        int n;
        cin >> n;
        if (n >= 1) {
            while (n != 1) {
                res += minPrime[n];
                n /= minPrime[n];
            }
        }
    }
    cout << res << endl;
    return 0;
}
