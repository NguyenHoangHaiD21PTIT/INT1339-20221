#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<string> topics;
    string topic;

    for (int i = 0; i < n; ++i) {
        getline(cin, topic);
        topics.push_back(topic);
        if (topic=="") {
            cout << topics[0] << ": " << topics.size() - 2 << endl;
            topics.clear();
        }
    }

    if (!topics.empty()) cout << topics[0] << ": " << topics.size() - 1 << endl;
} 
