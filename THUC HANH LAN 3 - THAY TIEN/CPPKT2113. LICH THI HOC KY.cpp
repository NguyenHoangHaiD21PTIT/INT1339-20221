#include <bits/stdc++.h>
using namespace std;
map<string, string> mp;
class CaThi {
private:
    string id, mamon, tenmon, ngaythi, giothi, nhomthi;
    int ngay, thang, nam, gio, phut;
public:
    CaThi(int x, string mamon, string ngaythi, string giothi, string nhomthi) {
        this->id = to_string(x);
        while (this->id.length() < 3) this->id = "0" + this->id; // Format ID to 3 digits
        this->id = "T" + this->id;
        this->mamon = mamon;
        this->tenmon = mp[mamon]; // Get the subject name from map
        this->ngaythi = ngaythi;
        this->giothi = giothi;
        this->nhomthi = nhomthi;

        // Parse the date
        stringstream ss_ngay(ngaythi);
        string part;
        getline(ss_ngay, part, '/');
        this->ngay = stoi(part);
        getline(ss_ngay, part, '/');
        this->thang = stoi(part);
        getline(ss_ngay, part);
        this->nam = stoi(part);

        // Parse the time
        stringstream ss_gio(giothi);
        getline(ss_gio, part, ':');
        this->gio = stoi(part);
        getline(ss_gio, part);
        this->phut = stoi(part);
    }
    bool operator<(const CaThi &other) const {
        if (this->nam != other.nam) return this->nam < other.nam;
        if (this->thang != other.thang) return this->thang < other.thang;
        if (this->ngay != other.ngay) return this->ngay < other.ngay;
        if (this->gio != other.gio) return this->gio < other.gio;
        if (this->phut != other.phut) return this->phut < other.phut;
        return this->mamon < other.mamon;
    }
    void print() const {
        cout << id << " " << mamon << " " << tenmon << " " << ngaythi << " " << giothi << " " << nhomthi << endl;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        mp[s1] = s2;
    }
    vector<CaThi> a;
    for (int i = 1; i <= m; i++) {
        string mamon, ngaythi, giothi, nhomthi;
        cin >> mamon >> ngaythi >> giothi >> nhomthi;
        a.push_back(CaThi(i, mamon, ngaythi, giothi, nhomthi));
    }
    sort(a.begin(), a.end());
    for (const auto& caThi : a) caThi.print();
}
/*
2 10
INT1155
Tin hoc co so 2
INT1339
Ngon ngu lap trinh C++
INT1155 25/11/2021 08:00 01
INT1155 04/12/2021 08:00 02
INT1155 04/12/2021 13:30 03
INT1155 25/11/2021 13:30 04
INT1155 25/11/2021 15:00 05
INT1339 25/11/2021 08:00 01
INT1339 25/11/2021 08:00 02
INT1339 04/12/2021 13:30 03
INT1339 04/12/2021 13:30 04
INT1339 04/12/2021 15:00 05 */
