#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m], cnt[100005] = {0};
        //Đếm trong a1 mỗi phần tử xuất hiện bao lần
        for(int i = 0;i<n;i++){
            cin>>a1[i];
            cnt[a1[i]]++;
        }
        for(int i = 0;i<m;i++) cin>>a2[i];
        //Duyệt theo thứ tự a2, xem mỗi thằng PHÂN BIỆT của a2 thì đã có trong a1 bao lần
        for(int x: a2){
            if(cnt[x]){
                for(int i = 0;i<cnt[x];i++) cout<<x<<" ";
                cnt[x] = 0;
            }
        }
        //Bây giờ xem trong a1 thằng nào còn số lần xuất hiện thì thằng đấy chưa được in
        vector<int>res;
        for(int x: a1){
            if(cnt[x]){
                for(int i = 0;i<cnt[x];i++) res.push_back(x);
                cnt[x] = 0;
            }
        }
        sort(res.begin(), res.end());
        for(int x: res) cout<<x<<" ";
        cout<<endl;
    }
}
