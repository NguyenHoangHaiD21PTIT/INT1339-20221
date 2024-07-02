#include<bits/stdc++.h>
using namespace std;

bool check(int n){//Hàm kiểm tra 1 số có số số chẵn = số số lẻ không
    int chan = 0, le = 0;
    while(n){
        int x = n%10;
        if(x%2) le++;
        else chan++;
        n/=10;
    }
    return chan==le;
}

int main(){
    int n, cnt = 0;;
    cin>>n;
    for(int i = pow(10, n - 1); i<=pow(10, n)-1;i++){
        if(check(i)){
            cout<<i<<" ";
            cnt++;
        }
        if(cnt%10==0) cout<<endl;
    }
}