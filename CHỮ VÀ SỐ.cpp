#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    int t;
    input >> t;
    while (t--) {
        char x;
        input >> x;
        if (isdigit(x)) output << "so" << endl;
        else if (isalpha(x)) output << "chu" << endl;
    }
}
