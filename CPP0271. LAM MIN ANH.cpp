#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int a[n + 1][m + 1], prefix[n + 1][m + 1] = {0};
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++) cin>>a[i][j];
        }
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++) prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
        }
        //Tính tổng cộng dồn trên HCN với hàng [i; i + l - 1] và [j; j + l - 1]
        for(int i = 1;i<=n - k + 1;i++){
            for(int j = 1;j<=m - k + 1;j++) cout<< (prefix[i + k - 1][j + k - 1] - prefix[i - 1][j + k - 1] - prefix[i + k - 1][j - 1] + prefix[i - 1][j - 1]) / (k * k)<<" ";
            cout<<endl;
        }
    }
}