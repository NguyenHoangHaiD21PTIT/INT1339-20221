#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string msv, ten, lop, birth;
    double gpa;
};

// Chuẩn hóa từ trong tên
string chuanhoa1(const string &s) {
    if (s.empty()) return "";
    return char(toupper(s[0])) + s.substr(1);
}

// Chuẩn hóa cả xâu họ tên
string chuanhoa2(const string &s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) res += chuanhoa1(word) + " ";
    if (!res.empty()) res.pop_back();
    return res;
}

// Chuẩn hóa ngày sinh
string chuanhoa3(const string &s) {
    stringstream ss(s);
    string day, month, year;
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);
    if (day.size() < 2) day = "0" + day;
    if (month.size() < 2) month = "0" + month;
    return day + "/" + month + "/" + year;
}

// bool cmp(const SinhVien &a, const SinhVien &b) {
//     if (a.gpa != b.gpa) return a.gpa > b.gpa;
//     return a.msv < b.msv;
// }

// Hàm để xuất thông tin sinh viên
string toString(const SinhVien &sv) {
    string msv = sv.msv;
    while (msv.size() < 9) msv = "B20DCCN" + string(9 - msv.size(), '0') + msv.substr(7);
    stringstream ss;
    ss << fixed << setprecision(2) << sv.gpa;
    return msv + " " + sv.ten + " " + sv.lop + " " + sv.birth + " " + ss.str();
}

int main() {
    ifstream cin("SV.in");
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> a(n);
    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        string ten, lop, birth;
        double gpa;
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, birth);
        cin >> gpa;
        cin.ignore(); 
        sv.msv = "B20DCCN" + string(3 - to_string(i + 1).size(), '0') + to_string(i + 1);
        sv.ten = chuanhoa2(ten);
        sv.lop = lop;
        sv.birth = chuanhoa3(birth);
        sv.gpa = gpa;
        a[i] = sv;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &sv : a) cout << toString(sv) << endl;
}
