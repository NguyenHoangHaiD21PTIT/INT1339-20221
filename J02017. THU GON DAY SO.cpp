#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n]; stack<int>st;
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int x: a){
        if(st.empty()) st.push(x);
        else{
            if((x + st.top())%2==0) st.pop();
            else st.push(x);
        }
    }
    cout<<st.size();
}
