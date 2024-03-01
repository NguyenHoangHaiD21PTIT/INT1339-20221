#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1;//xau ban dau
	getline(cin, c1);
	string c2;//xau dung de xoa sau do
	cin >> c2;
	string token;
	stringstream c3(c1);
	while(c3 >> token){
		if(token!=c2){
			cout << token << " ";
		}
	}
}
