#include <bits/stdc++.h>
using namespace std;

struct DanhBa {
    string ten, sdt, ngay, tencuoi, ho, dem;

    // Constructor
    DanhBa(string ten, string sdt, string ngay) {
        this->ten = ten;
        this->sdt = sdt;
        this->ngay = ngay;

        // Tách tên thành các từ riêng biệt
        stringstream ss(ten);
        vector<string> a;
        string word;
        while (ss >> word) a.push_back(word);

        //Xác định họ, tên và họ đệm
        tencuoi = a.back();
        ho = a.front();
        dem = "";
        for (int i = 1; i < a.size() - 1; ++i) dem += a[i] + ' ';
    }
};

bool cmp(const DanhBa& a, const DanhBa& b) {
    if (a.tencuoi != b.tencuoi) return a.tencuoi < b.tencuoi;
    if (a.ho != b.ho) return a.ho < b.ho;
    return a.dem < b.dem;
}

int main() {
    // Đọc dữ liệu từ file
    fstream infile("SOTAY.txt");
    vector<string> a;
    string line;
    while (getline(infile, line)) a.push_back(line);
    infile.close();

    // Xử lý và sắp xếp danh bạ
    vector<DanhBa> db;
    int i = 0;
    while (i < a.size()) {
        if (a[i].substr(0, 4) == "Ngay") {
            string day = a[i].substr(5); // Lưu thông tin ngày
            int tmp = i + 1;
            // Duyệt tiếp để tạo các đối tượng DanhBa liên tiếp cho đến khi gặp dòng bắt đầu bằng "Ngay"
            while (tmp < a.size() && a[tmp].substr(0, 4) != "Ngay") {
                string ten = a[tmp], sdt = a[tmp + 1];
                db.push_back({ten, sdt, day});
                tmp += 2; // Chuyển sang cặp người và sđt tiếp theo
            }
            i = tmp; // Lại bắt đầu với dòng chứa ngày mới
        } 
    }

    // Sắp xếp danh sách
    sort(db.begin(), db.end(), cmp);

    // Ghi kết quả vào file DIENTHOAI.txt
    fstream outfile("DIENTHOAI.txt");
    for (const auto& t : db) outfile << t.ten << ": " << t.sdt << " " << t.ngay << endl;
    outfile.close();

    return 0;
}
