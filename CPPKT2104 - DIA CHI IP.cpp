#include<bits/stdc++.h>
using namespace std;
bool kt(string s){ //Hàm check xâu số nhỏ hơn bằng 3 chữ số
	if(s.size()>=4) return false;//Quá 3 chữ số đương nhiên sai
	for(char i: s){
		if(!isdigit(i)) return false; //Không là xâu số cũng sai
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i = 0;i<s.size();i++){
			if(s[i]=='.') s[i]=' ';
		}
		stringstream ss(s);
		string token;
		vector<string>vs;
		while(ss>>token) vs.push_back(token);
		if(vs.size()!=4){
			cout<<"NO"<<endl;
		} else {
			int check = 1;
			for(int i = 0;i<vs.size();i++){
				if(!kt(vs[i])){
					check = 0;
					break;
				}
				int x = stoi(vs[i]);
				if(x<0||x>255){
					check = 0;
					break;
				}
			}
			if (!check) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}