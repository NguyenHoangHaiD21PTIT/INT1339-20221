#include <bits/stdc++.h>
using namespace std;

bool isInteger(string s) {
    try {
        stoi(s);
        return true;
    } catch (exception e) {
        return false;
    }
}

bool isValidIP(const string& s) {
    string temp = s;
    for (char& c : temp) {
        if (c == '.') c = ' ';
    }
    stringstream ss(temp);
    string token;
    vector<string> vs;
    while (ss >> token) vs.push_back(token);
    if (vs.size() != 4) return false;
    for (string part : vs) {
        if (!isInteger(part)) return false;
        int num = stoi(part);
        if (num < 0 || num > 255) return false;
    }
    return true;
}

int main() {
    string s;
    cin>>s;
    if(isValidIP(s)) cout<<"YES";
    else cout<<"NO";
}

