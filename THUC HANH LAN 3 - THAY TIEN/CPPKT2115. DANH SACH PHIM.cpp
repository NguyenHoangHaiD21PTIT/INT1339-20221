#include <bits/stdc++.h>
using namespace std;
class Phim {
private:
    string MaPhim, TheLoai, NgayChieu, TenPhim;
    int SoTap, ngay, thang, nam;
public:
    Phim(int x, string TheLoai, string NgayChieu, string TenPhim, int SoTap) {
        char buffer[10];
        sprintf(buffer, "P%03d", x);
        this->MaPhim = buffer;
        this->TheLoai = TheLoai;
        this->NgayChieu = NgayChieu;
        this->TenPhim = TenPhim;
        this->SoTap = SoTap;
        // Parsing the date (NgayChieu) into day, month, and year
        stringstream ss(NgayChieu);
        string part;
        getline(ss, part, '/');
        this->ngay = stoi(part);
        getline(ss, part, '/');
        this->thang = stoi(part);
        getline(ss, part);
        this->nam = stoi(part);
    }
    bool operator<(const Phim &o) const {
        if (this->nam != o.nam) return this->nam < o.nam;
        else if (this->thang != o.thang) return this->thang < o.thang;
        else if (this->ngay != o.ngay) return this->ngay < o.ngay;
        else if (this->TenPhim != o.TenPhim) return this->TenPhim < o.TenPhim;
        else return o.SoTap < this->SoTap;
    }
    void print() const {
        cout << MaPhim << TheLoai << " " << NgayChieu << " " << TenPhim << " " << SoTap << endl;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    map<string, string> d;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        d["TL" + to_string(i + 1)] = s;
    }
    vector<Phim> a;
    for (int i = 1; i <= m; i++) {
        string TheLoai, NgayChieu, TenPhim;
        int SoTap;
        getline(cin, TheLoai);
        getline(cin, NgayChieu);
        getline(cin, TenPhim);
        cin >> SoTap;
        cin.ignore();
        Phim tmp(i, d[TheLoai], NgayChieu, TenPhim, SoTap);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for (const auto &phim : a) phim.print();
}

