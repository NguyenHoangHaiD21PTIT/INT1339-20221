#include <bits/stdc++.h>
using namespace std;

int arr[20][10][20]; // Mảng lưu trạng thái (tuần - thứ - tiết)

bool check(int day, const string& lesson, const string& week) { //lesson: tiết mấy trong tuần
    for (int i = 0; i < week.size(); ++i) {
        if (week[i] == '-') continue;
        int week_num = i + 1;//số ở vị trí thứ i thì là tuần thứ i + 1
        for (int j = 0; j < lesson.size(); ++j) {
            if (lesson[j] == '-') continue;
            int period = j + 1;
            arr[week_num][day][period]++;
            if (arr[week_num][day][period] > 1) return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int monHoc; cin >> monHoc;
        memset(arr, 0, sizeof arr);
        bool conflict = false;
        while (monHoc--) {
            int day;//Thứ mấy trong tuần
            string lesson, week; //Học tiết mấy vào những tuần nào
            cin >> day >> lesson >> week;
            if (!conflict && !check(day, lesson, week)) conflict = true;
        }
        cout << (conflict ? "YES\n" : "NO\n");
    }
}
/*
2
3
2
12
123456789-12345
2
--34
123456789-12345
3
1234
----5--8--1
3
2
12
123456789-12345
2
--34
123456789-12345
2
1234
----5--8--1
*/
