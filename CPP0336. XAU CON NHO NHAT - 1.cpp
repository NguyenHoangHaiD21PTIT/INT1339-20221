#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        //Đếm tần suất mỗi ký tự trong xâu s2
        int cnt[26] = {0};
        for(char x: s2) cnt[x - 'a']++;

        //Xét các xâu con liên tục bắt đầu từ index i
        int len = INT_MAX;//Chiều dài ngắn nhất xâu thoả mãn
        string res = "";
        for(int i = 0;i<s1.size();i++){
            int p = 0;//Số lượng ký tự cần lấy (Không cần liên tiếp) để đảm bảo đủ số ký tự yêu cầu mỗi loại bên s2
            int cnt1[26] = {};
            for(int j = i;j<s1.size();j++){
                cnt1[s1[j] - 'a']++;
                //Chữ cái đang xét có mặt trong xâu 2 mà chưa quá số lần xuất hiện thì thêm vào
                if(cnt1[s1[j] - 'a'] <= cnt[s1[j] - 'a']) p++;
                //Nếu đã lấy đủ lượng chữ cái cần thiết
                if(p==s2.size()){
                    int tmp = j - i + 1;//Chiều dài xâu
                    if(tmp<len){
                        len = tmp;
                        res = s1.substr(i, len);
                    }
                    break;//Lấy đủ lượng chữ cái rồi thì thôi
                }
            }
        }

        if(len==INT_MAX) cout<<-1<<endl;
        else cout<<res<<endl;
    }
}

