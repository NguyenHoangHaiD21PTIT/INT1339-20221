#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        //Xác định số ký tự phân biệt trong s
        int n = s.length();
        unordered_set<char> uniqueChars(s.begin(), s.end());
        int required = uniqueChars.size();

        //Đếm số ký tự trong xâu con được cắt
        unordered_map<char, int> windowCounts;
        int have = 0, left = 0, minLength = INT_MAX;//have: đã có 

        for (int right = 0; right < n; ++right) {
            windowCounts[s[right]]++;
            if (windowCounts[s[right]] == 1) have++;
            while (have == required) {//Chừng nào còn đủ số ký tự phân biệt yêu cầu thì dịch trái
                minLength = min(minLength, right - left + 1);
                windowCounts[s[left]]--;
                if (windowCounts[s[left]] == 0) have--;
                left++;
            }
        }

        cout << minLength << endl;
    }

    return 0;
}
