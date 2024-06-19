#include <bits/stdc++.h>
using namespace std;

bool comparePairs(pair<int, int> &x, pair<int, int> &y) {
    if (x.first != y.first) return x.first < y.first;
    return x.second < y.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> clients;

    for (int i = 0; i < n; ++i) {
        int checkin, time;
        cin >> checkin >> time;
        clients.push_back({checkin, time});
    }

    sort(clients.begin(), clients.end(), comparePairs);

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (res <= clients[i].first) res = clients[i].first + clients[i].second;
        else res += clients[i].second;
    }

    cout << res << endl;

    return 0;
}
