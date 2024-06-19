#include <bits/stdc++.h>
using namespace std;

class MonHoc {
public:
    string mamon;
    string tenmon;

    friend istream& operator>>(istream& is, MonHoc& mh) {
        getline(is, mh.mamon);
        getline(is, mh.tenmon);
        return is;
    }
};

class LichThi {
public:
    string id, mamon, tenmon, ngaythi, giothi, nhomthi;
    int ngay, thang, nam, gio, phut;

    LichThi() {}

    LichThi(int x, string mamon, string ngaythi, string giothi, string nhomthi, map<string, string>& mp) {
        this->id = "T" + string(3 - to_string(x).length(), '0') + to_string(x);
        this->mamon = mamon;
        this->tenmon = mp[mamon];
        this->ngaythi = ngaythi;
        this->giothi = giothi;
        this->nhomthi = nhomthi;

        // Tách ngày thi
        vector<int> ngayParts = splitDate(ngaythi);
        this->ngay = ngayParts[0];
        this->thang = ngayParts[1];
        this->nam = ngayParts[2];

        // Tách giờ thi
        vector<int> gioParts = splitTime(giothi);
        this->gio = gioParts[0];
        this->phut = gioParts[1];
    }

    static vector<int> splitDate(const string& date) {
        vector<int> result;
        stringstream ss(date);
        string item;
        while (getline(ss, item, '/')) {
            result.push_back(stoi(item));
        }
        return result;
    }

    static vector<int> splitTime(const string& time) {
        vector<int> result;
        stringstream ss(time);
        string item;
        while (getline(ss, item, ':')) {
            result.push_back(stoi(item));
        }
        return result;
    }

    friend ostream& operator<<(ostream& os, const LichThi& lt) {
        os << lt.id << " " << lt.mamon << " " << lt.tenmon << " " << lt.ngaythi << " " << lt.giothi << " " << lt.nhomthi;
        return os;
    }

    friend istream& operator>>(istream& is, LichThi& lt) {
        string line;
        getline(is, line);
        stringstream ss(line);
        ss >> lt.mamon >> lt.ngaythi >> lt.giothi >> lt.nhomthi;
        return is;
    }
};

void process(MonHoc mh[], int n, LichThi lt[], int m) {
    map<string, string> mp;
    for (int i = 0; i < n; ++i) {
        mp[mh[i].mamon] = mh[i].tenmon;
    }
    for (int i = 0; i < m; ++i) {
        lt[i] = LichThi(i + 1, lt[i].mamon, lt[i].ngaythi, lt[i].giothi, lt[i].nhomthi, mp);
    }
    sort(lt, lt + m, [](const LichThi& a, const LichThi& b) {
        if (a.nam != b.nam) return a.nam < b.nam;
        if (a.thang != b.thang) return a.thang < b.thang;
        if (a.ngay != b.ngay) return a.ngay < b.ngay;
        if (a.gio != b.gio) return a.gio < b.gio;
        if (a.phut != b.phut) return a.phut < b.phut;
        return a.mamon < b.mamon;
    });
}

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++) {
        cin >> mh[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> lt[i];
    }
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++) {
        cout << lt[i] << endl;
    }
}
