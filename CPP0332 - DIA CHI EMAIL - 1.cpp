#include<bits/stdc++.h>
using namespace std;
void Vietthuong(string &x){//viet thuong toan bo
	for(int i = 0; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
int main(){
	string c;
	getline(cin, c);
	stringstream c1(c);
	string token;
	vector<string>s;
	while(c1>>token){
		s.push_back(token);
	}
	Vietthuong(s[s.size()-1]);
	cout<<s[s.size()-1];
	for(int i=0;i<s.size()-1;i++){
		s[i][0]=tolower(s[i][0]);
		cout <<s[i][0];
	}
	cout<<"@ptit.edu.vn";
}
