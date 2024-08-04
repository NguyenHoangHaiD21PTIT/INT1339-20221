#include<bits/stdc++.h>
using namespace std;

void VietHoa(string &x){//Chuẩn hoá từng từ trong tên
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++) x[i] = tolower(x[i]);
}

int main(){
    string s;
    ifstream cin("DATA.in");
    while(getline(cin, s)){
        if(s=="END") break;
        stringstream ss(s);
        string token;
        while(ss>>token){
            VietHoa(token);
            cout<<token<<" ";
        }
        cout<<endl;
    }
}
