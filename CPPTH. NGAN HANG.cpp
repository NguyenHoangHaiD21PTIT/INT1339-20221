#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    cin.ignore(); 
    while(t--){
        string s; 
        getline(cin, s); 
        int n; 
        cin >> n;
        ll tong = 0;
        while(n--){
            ll x; 
            cin >> x;
            if(x < 0) tong += abs(x);
        }
        if(tong >= 100000000) cout << "YES\n";
        else cout << "NO\n";
    }
}
/*
1
Nguyen Van Nam
5
100000 5000000 -1000000 -2000000 -10000
*/
