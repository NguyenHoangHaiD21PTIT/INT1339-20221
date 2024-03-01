#include<bits/stdc++.h>
using namespace std;
void VietHoa1(string &x){//viet hoa chu cai dau
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
void VietHoa2(string &x){//viet hoa toan bo
	for(int i = 0; i < x.length(); i++){
		x[i] = toupper(x[i]);
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
	for(int i=0;i<s.size()-1;i++){
		VietHoa1(s[i]);
	}
	VietHoa2(s[s.size()-1]);
	for(int i=0;i<s.size()-2;i++){
		cout<<s[i]<<" ";
	}
	cout <<s[s.size()-2]<<", ";
	cout <<s[s.size()-1];
}
	
