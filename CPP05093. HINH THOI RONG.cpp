#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}

 
