#include <bits/stdc++.h>
using namespace std;

bool isValidEmail(const string& email) {

    // Đếm số lượng ký tự '@' trong địa chỉ email
    int countAt = 0;
    for (char c : email) {
        if (c == '@') countAt++;
    }
    if (countAt != 1) return false; // Phải có đúng một ký tự '@'

    // Tách địa chỉ email thành tên người dùng và tên miền
    int atPos = email.find('@');//Vị trí dấu @
    string username = email.substr(0, atPos);
    string domain = email.substr(atPos + 1);

    // Độ dài tối đa của tên người dùng và tên miền
    if (username.length() > 64 || domain.length() > 254) return false;

    // Tên miền phải chứa ít nhất một dấu '.', và không được nằm ở đầu hoặc cuối
    int dotPos = domain.find('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == domain.length() - 1) return false;

    // Kiểm tra từng ký tự trong địa chỉ email
    for (char c : email) {
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '.' || c == '_' || c == '@')) {
            return false; // Địa chỉ email chỉ được chứa các ký tự hợp lệ
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    vector<string> emails(N);
    for (int i = 0; i < N; ++i) {
        string s;
        getline(cin, s);
        if(isValidEmail(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
