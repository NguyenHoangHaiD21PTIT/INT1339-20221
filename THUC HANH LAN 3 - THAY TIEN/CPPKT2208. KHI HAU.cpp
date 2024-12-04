#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

string getSeason(const string& location, int year, int day) {
    if (location == "Bac") {
        if (isLeapYear(year)) {
            if (day >= 1 && day <= 31) return "Dong";
            else if (day > 31 && day <= 121) return "Xuan";
            else if (day > 120 && day <= 212) return "He";
            else if (day > 212 && day <= 304) return "Thu";
            else return "Dong";
        } else {
            if (day >= 1 && day <= 31) return "Dong";
            else if (day > 31 && day <= 120) return "Xuan";
            else if (day > 120 && day <= 212) return "He";
            else if (day > 212 && day <= 304) return "Thu";
            else return "Dong";
        }
    } else {
        if (isLeapYear(year)) {
            if (day >= 1 && day <= 121) return "Kho";
            else return "Mua";
        } else {
            if (day >= 1 && day <= 120) return "Kho";
            else return "Mua";
        }
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        string location;
        cin >> location;
        int year, day;
        cin >> year >> day;
        cout << getSeason(location, year, day) << endl;
    }
    return 0;
}
/*
2
Bac
2022 35
Nam
2022 35 */

