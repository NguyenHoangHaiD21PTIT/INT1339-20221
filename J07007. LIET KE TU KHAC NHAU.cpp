#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("VANBAN.in");
    string s;
    set<string> res;
    while (cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        res.insert(s);
    }
    for (string x : res) cout << x << endl;
}
