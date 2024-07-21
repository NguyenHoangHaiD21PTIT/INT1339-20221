#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long tong = 0;
        for(int i = 1;i<=sqrt(n);i++){
            if(n%i==0){
                tong+=i + n/i;
                if(i*i==n) tong-=i;
            }
        }
        cout<<tong<<endl;
    }
}