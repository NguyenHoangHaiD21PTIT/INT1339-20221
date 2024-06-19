#include<bits/stdc++.h>
using namespace std;
int Page(string s){//Hàm lấy số trang
    if(s.size() < 6) return -1;
    string tmp = s.substr(0, 4), page = s.substr(5);
    if(tmp != "Page") return -1;
    return stoi(page);
}

int Level(string s){//Hàm lấy cấp độ đề mục
    if(s.size() < 6) return -1;
    string tmp = s.substr(0, 5);
    if(tmp == "Level") return s[5] - '0';
    return -1;
}

int main(){
    ifstream fin("VANBAN.txt");
    ofstream fout("MUCLUC.txt");
    string s;
    int i;//i lưu số trang của tiêu mục
    while(getline(fin, s)){
        if(s=="") continue;//Dòng trống thì kệ không làm gì cả
        int soTrang = Page(s);//Lấy ra số trang tương ứng nếu có
        if(soTrang != -1) i = soTrang; //Gán số trang, chờ cấp độ và tiêu mục tương ứng để ghép
        int capDo = Level(s);//Lấy ra cấp độ ghi ở đầu dòng nếu có
        if(capDo != -1){
            string tmp = "";
            while(capDo--) tmp += ">";//Bao nhiêu cấp thì bấy nhiêu dấu
            string sub = s.substr(8);
            tmp += sub + "--- " + to_string(i);
            fout<<tmp<<endl;
        }
    }
}

