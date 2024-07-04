#include <bits/stdc++.h>
using namespace std;

/*Chú ý rằng mọi ước chung đều là ước của UCLN. Ta chứng minh như sau:
    Theo bổ đề Bézout: Với a, b nguyên & UCLN(a, b) = d thì tồn tại x, y nguyên sao cho ax + by = d
    Gọi d' là 1 ước chung của a và b --> a = md', b = nd' (m, n nguyên)
    --> md'x + nd'y = d = d'(mx + ny)
    https://vi.wikipedia.org/wiki/B%C3%A9zout's_identity
*/
/*Các số a0, a1, a2, ... chia cho k đều chung số dư
    --> |a1 - a0|, |a2 - a0|, .... đều chia hết cho k -->Tìm tất cả các số k chia hết cho |a1 - a0|, |a2 - a0|, ...
    --> Tìm tất cả các ước chung
*/
// Hàm đếm số ước của một số
int cnt(int n) {
    int res = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != n / i) res += 2; 
            else res += 1; 
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) a[i] = abs(a[i] - a[0]);
        a[0] = 0;
        int s = 0;
        for (int i = 0; i < n; i++) s = __gcd(s, a[i]);
        cout<<cnt(s)<<endl;
    }
}