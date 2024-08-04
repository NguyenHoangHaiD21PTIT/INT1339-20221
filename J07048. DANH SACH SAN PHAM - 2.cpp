#include <bits/stdc++.h>
using namespace std;

struct SanPham {
    string id, name;
    int giaBan, baoHanh;
};

bool cmp(SanPham a, SanPham b) {
    if (a.giaBan != b.giaBan) return b.giaBan < a.giaBan; 
    return a.id < b.id; 
}

int main() {
    ifstream cin("SANPHAM.in");
    int t;
    cin >> t;
    vector<SanPham>a(t);
    cin.ignore(); 
    for (int i = 0; i < t; ++i) {
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        cin >> a[i].giaBan >> a[i].baoHanh;
        cin.ignore(); 
    }
    sort(a.begin(), a.end(), cmp);
    for (auto sp: a) cout << sp.id << " " << sp.name << " " << sp.giaBan << " " << sp.baoHanh << endl;
}
