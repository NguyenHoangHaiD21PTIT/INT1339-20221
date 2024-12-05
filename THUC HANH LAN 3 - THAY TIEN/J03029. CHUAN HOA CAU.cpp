#include <bits/stdc++.h>
using namespace std;

string chuanHoaCau(string s) {
    // Xóa khoảng trắng thừa ở đầu và cuối
    while (!s.empty() && isspace(s[0])) s.erase(s.begin());
    while (!s.empty() && isspace(s.back())) s.pop_back();

    // Tách các từ bằng khoảng trắng
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) res += word + " ";

    // Xóa khoảng trắng thừa ở cuối
    if (!res.empty() && res.back() == ' ') res.pop_back();

    // Thay thế khoảng trắng trước dấu câu
    int pos;
    while ((pos = res.find(" ?")) != string::npos) res.replace(pos, 2, "?");
    while ((pos = res.find(" .")) != string::npos) res.replace(pos, 2, ".");
    while ((pos = res.find(" !")) != string::npos) res.replace(pos, 2, "!");

    // Thêm dấu "." nếu câu không kết thúc bằng dấu câu
    char lastChar = res.empty() ? '\0' : res.back();
    if (lastChar != '?' && lastChar != '.' && lastChar != '!') res += ".";

    // Viết hoa chữ cái đầu tiên và các chữ cái còn lại thành chữ thường
    if (!res.empty()) {
        res[0] = toupper(res[0]);
        for (size_t i = 1; i < res.size(); ++i) res[i] = tolower(res[i]);
    }
    return res;
}

int main() {
    string line;
    vector<string>ans;
    while (getline(cin, line)) ans.push_back(chuanHoaCau(line));
    for(string x: ans) cout<<x<<endl;
    return 0;
}
/*
Chuong trinh Dao Tao CLC nganh CNTT duoc Thiet     Ke theo chuan quoc te.
co 03 chuyen nganh la: Cong  nghe phan mem, Tri tue nhan tao va An toan thong tin
muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep
moi    CAC BAN danG ky     thaM giA ! */
