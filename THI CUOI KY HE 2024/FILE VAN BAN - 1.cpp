#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin ("PTIT.in");
    ofstream cout ("PTIT.Out");
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char x = s.back();
        if(x=='0'||x=='2'||x=='4'||x=='6'||x=='8') cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}