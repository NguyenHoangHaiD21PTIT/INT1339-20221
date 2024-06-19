#include <bits/stdc++.h>
using namespace std;

class CongNhan {
private:
    string mnv, ten, chucvu;
    long long luongcb, day, luongthang, thuong, phucap, thunhap;

public:
    CongNhan(string ten, long long luongcb, long long day, string chucvu) {
        this->mnv = "NV01";
        this->ten = ten;
        this->luongcb = luongcb;
        this->day = day;
        this->chucvu = chucvu;
        this->luongthang = this->luongcb * this->day;

        if (this->day >= 25) this->thuong = this->luongthang * 20 / 100;
        else if (this->day >= 22 && this->day <= 24) this->thuong = this->luongthang * 10 / 100;
        else this->thuong = 0;

        if (this->chucvu == "GD") this->phucap = 250000;
        else if (this->chucvu == "PGD") this->phucap = 200000;
        else if (this->chucvu == "TP") this->phucap = 180000;
        else this->phucap = 150000;

        this->thunhap = this->luongthang + this->thuong + this->phucap;
    }

    string toString() {
        return this->mnv + " " + this->ten + " " + to_string(this->luongthang) + " "
             + to_string(this->thuong) + " " + to_string(this->phucap) + " " + to_string(this->thunhap);
    }
};

int main() {
    string a, d;
    long long b, c;

    getline(cin, a);
    cin >> b >> c;
    cin.ignore(); 

    getline(cin, d);

    CongNhan x(a, b, c, d);
    cout << x.toString() << endl;

    return 0;
}
