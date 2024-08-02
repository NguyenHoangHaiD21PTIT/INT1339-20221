#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, m;
        cin >> d >> m;
        if (m == 1) {
            if (d < 20) cout << "Ma Ket" << endl; 
            else cout << "Bao Binh" << endl;
        } else if (m == 2) {
            if (d < 19) cout << "Bao Binh" << endl; 
            else cout << "Song Ngu" << endl;
        } else if (m == 3) {
            if (d < 21) cout << "Song Ngu" << endl; 
            else cout << "Bach Duong" << endl;
        } else if (m == 4) {
            if (d < 20) cout << "Bach Duong" << endl; 
            else cout << "Kim Nguu" << endl;
        } else if (m == 5) {
            if (d < 21) cout << "Kim Nguu" << endl; 
            else cout << "Song Tu" << endl;
        } else if (m == 6) {
            if (d < 21) cout << "Song Tu" << endl; 
            else cout << "Cu Giai" << endl;
        } else if (m == 7) {
            if (d < 23) cout << "Cu Giai" << endl; 
            else cout << "Su Tu" << endl;
        } else if (m == 8) {
            if (d < 23) cout << "Su Tu" << endl; 
            else cout << "Xu Nu" << endl;
        } else if (m == 9) {
            if (d < 23) cout << "Xu Nu" << endl; 
            else cout << "Thien Binh" << endl;
        } else if (m == 10) {
            if (d < 23) cout << "Thien Binh" << endl; 
            else cout << "Thien Yet" << endl;
        } else if (m == 11) {
            if (d < 23) cout << "Thien Yet" << endl; 
            else cout << "Nhan Ma" << endl;
        } else {
            if (d < 22) cout << "Nhan Ma" << endl; 
            else cout << "Ma Ket" << endl;
        }
    }
}


