#include<bits/stdc++.h>
using namespace std;
string giaithua(char a){
    if (a=='0' || a=='1') return "1";
    else if (a=='2') return "2";
    else if (a=='3') return "3";
    else if (a=='4') return "322";
    else if (a=='5') return "5";
    else if (a=='6') return "53";
    else if (a=='7') return "7";
    else if (a=='8') return "7222";
    else if (a=='9') return "7332";
}
/*giaithua(a): Biểu diễn a! thành nhiều giai thừa nhất có thể rồi sắp xếp giảm dần
Ví dụ: 7! = 7! = 6!*6 (Không tồn tại số nào có giai thừa 6) = 5! * 42 (Cũng không tồn tại số nào có giai thừa 42)
          = 4! * 210 (K tồn tại 210) = ...
Nói chung là cứ thử nhỏ dần
*/
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string a;
        cin >> n >> a;
        string tmp = "";
        for (int i = 0; i < a.length(); ++i) tmp += giaithua(a[i]);
        sort(tmp.begin(), tmp.end(), greater<char>());
        for(char x: tmp){
            if(x!='1') cout<<x;
        }
        cout<<endl;
    }
    return 0;
}