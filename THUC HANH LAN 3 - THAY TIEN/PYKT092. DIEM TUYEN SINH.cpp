#include <bits/stdc++.h>
using namespace std;

class TS {
private:
    string id, name, dantoc, kv, status;
    double diem, uutien, diemfinal;
    string chuanhoa(string s) {
        stringstream ss(s);
        string word, res = "";
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (size_t i = 1; i < word.size(); ++i) word[i] = tolower(word[i]);
            res += word + " ";
        }
        res.pop_back(); 
        return res;
    }

public:
    TS(int x, string name, double diem, string dantoc, string kv) {
        this->id = "TS" + (x < 10 ? "0" + to_string(x) : to_string(x));
        this->name = chuanhoa(name);
        this->diem = diem;
        this->dantoc = dantoc;
        this->kv = kv;
        this->uutien = 0.0;
        if (kv == "1") this->uutien += 1.5;
        else if (kv == "2") this->uutien += 1.0;
        if (dantoc != "Kinh") this->uutien += 1.5;
        this->diemfinal = this->diem + this->uutien;
        this->status = (this->diemfinal >= 20.5 ? "Do" : "Truot");
    }
    double getDiemFinal() const {
        return this->diemfinal;
    }
    string getID() const {
        return this->id;
    }
    void print() const {
        cout << id << " " << name << " " << fixed << setprecision(1) << diemfinal << " " << status << endl;
    }
    friend bool cmp(const TS& x, const TS& y);
};

bool cmp(const TS& x, const TS& y) {
    if (x.diemfinal == y.diemfinal) return x.id < y.id; 
    return x.diemfinal > y.diemfinal; 
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<TS> a;
    for (int i = 1; i <= n; ++i) {
        string name, dantoc, kv;
        getline(cin, name);     
        double diem; cin >> diem;            
        cin.ignore();           
        getline(cin, dantoc); getline(cin, kv);       
        a.emplace_back(i, name, diem, dantoc, kv);
    }
    sort(a.begin(), a.end(), cmp);
    for (const auto& ts : a) ts.print();
}
