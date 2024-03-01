#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	set<string>s;
	while(n--){
		string p;
		getline(cin, p);
		s.insert(p);
	}
	cout << s.size();
}
