#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    s = " " + s; 
    int n = s.size();
    long long a[n + 5] = {}, b[n + 5] = {};
    for(int i = 1; i < n; i++) {
        if(s[i] == 'A') {
            a[i] = a[i - 1];
            b[i] = min(b[i - 1] + 1, a[i - 1] + 1);
        } else {
            b[i] = b[i - 1];
            a[i] = min(a[i - 1] + 1, b[i - 1] + 1);
        }
    }
    cout << a[n - 1]; 
}
/*Gọi a[i], b[i] là số thao tác tối thiểu để xâu X từ index [0; i] được biến đổi về toàn A hoặc toàn B
a[0] = b[0] = 0 do là xâu rỗng
*Nếu là ký tự A
a[n] = a[n - 1] vì ta chỉ cần biến đổi n - 1 chữ đầu về A thôi
b[n] = 1 + min(a[n - 1], b[n - 1]])
Tức là: Biến đổi n - 1 chữ đầu về A rồi thêm 1 lần nữa biến đổi cả dãy về B
Hoặc: Biến đổi n - 1 chữ đầu về B rồi thêm 1 phép biến đổi ký tự cuối cùng từ A sang B
*/
