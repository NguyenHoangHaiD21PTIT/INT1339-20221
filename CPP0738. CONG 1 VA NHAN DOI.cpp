#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    for(int i = 0;i<n;i++){
        if(a[i]) return false;
    }
    return true;
}

int cnt(int a[], int n){//Số thao tác biến đổi
    int res = 0;
    long long dem = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                a[i]--;
                dem++;
            }
        }
        if(check(a, n)) return dem;
        for (int i = 0; i < n; i++) a[i] /= 2;
        dem++;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout<<cnt(a, n)<<endl;
    }
}