#include <bits/stdc++.h>
using namespace std;

struct MonHoc{
    string ma, ten, soTC;
};

bool cmp(MonHoc a, MonHoc b){
    return a.ten < b.ten;
}

int main(){
    ifstream cin("MONHOC.in");
    int n;
    cin>>n;
    cin.ignore();
    vector<MonHoc>a(n);
    for(int i = 0;i<n;i++){
        getline(cin, a[i].ma);
        getline(cin, a[i].ten);
        getline(cin, a[i].soTC);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0;i<n;i++)cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].soTC<<endl;
}
