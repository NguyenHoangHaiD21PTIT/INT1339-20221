#include <bits/stdc++.h>
using namespace std;

map<string, string> mp; 
class MonHoc {
public:
    string mamon, tenmon;
    MonHoc() {}
    MonHoc(string mamon, string tenmon) : mamon(mamon), tenmon(tenmon) {}
    friend istream& operator>>(istream& in, MonHoc& mh) {
        in >> mh.mamon;
        in.ignore();
        getline(in, mh.tenmon);
        mp[mh.mamon] = mh.tenmon; 
        return in;
    }
    friend ostream& operator<<(ostream& out, const MonHoc& mh) {
        out << mh.mamon << " " << mh.tenmon << endl;
        return out;
    }
};

class LichThi {
public:
    string mamon, ngaythi, giothi, nhomthi, tenmon, id;
    int ngay, thang, nam, gio, phut;
    LichThi() {}
    friend istream& operator>>(istream& in, LichThi& lt) {
        in >> lt.mamon >> lt.ngaythi >> lt.giothi >> lt.nhomthi;
        lt.tenmon = mp[lt.mamon]; 
        stringstream ss_ngay(lt.ngaythi);
        string part;
        getline(ss_ngay, part, '/');
        lt.ngay = stoi(part);
        getline(ss_ngay, part, '/');
        lt.thang = stoi(part);
        getline(ss_ngay, part);
        lt.nam = stoi(part);

        stringstream ss_gio(lt.giothi);
        getline(ss_gio, part, ':');
        lt.gio = stoi(part);
        getline(ss_gio, part);
        lt.phut = stoi(part);
        return in;
    }

    friend ostream& operator<<(ostream& out, const LichThi& lt) {
        out << lt.id << " " << lt.mamon << " " << lt.tenmon << " "
            << lt.ngaythi << " " << lt.giothi << " " << lt.nhomthi << endl;
        return out;
    }

    bool operator<(const LichThi& other) const {
        if (nam != other.nam) return nam < other.nam;
        if (thang != other.thang) return thang < other.thang;
        if (ngay != other.ngay) return ngay < other.ngay;
        if (gio != other.gio) return gio < other.gio;
        if (phut != other.phut) return phut < other.phut;
        return mamon < other.mamon;
    }
};

void process(MonHoc mh[], int n, LichThi lt[], int m) {
    for (int i = 0; i < m; i++) {
        stringstream ss;
        ss << "T" << setw(3) << setfill('0') << (i + 1);
        lt[i].id = ss.str();
    }
    sort(lt, lt + m); 
}

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();  
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++) cin >> mh[i];
    for (int i = 0; i < m; i++) cin >> lt[i];
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++) cout << lt[i];
    return 0;
}
