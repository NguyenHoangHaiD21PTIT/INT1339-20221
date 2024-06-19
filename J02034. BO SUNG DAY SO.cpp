#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt[250] = {}; int Max = -1;
    while(n--){
        int x; cin>>x;
        cnt[x]=1;
        Max = max(Max, x);
    }
    bool check = true;
    for(int i = 1;i<=Max;i++){
        if(!cnt[i]){
            cout<<i<<endl;
            check = false;
        }
    }
    if(check) cout<<"Excellent";
}
