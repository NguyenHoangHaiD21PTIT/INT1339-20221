#include <bits/stdc++.h>
using namespace std;

long long checkNT(long long n){
    if(n<=1) return 0;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

long long tongCS(long long n){
    int res = 0;
    while(n){
        res+=n%10;
        n/=10;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, s;
        cin>>n>>s;
        if(checkNT(n)&&tongCS(n)==s) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
