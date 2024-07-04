#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int k, x;
        cin >> k >> x;
        int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        int l = pos - 1, r;
        if(pos < n && a[pos] == x) r = pos + 1;
        else r = pos;
        for(int i = k / 2 - 1; i >= 0; i--) cout << a[l - i] << " ";
        for(int i = 0; i < k / 2; i++) cout << a[r + i] << " ";
        cout << endl;
    }
}