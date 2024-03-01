#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set<int>s;
	while(n--){
		int x;
		cin >> x;
		s.insert(x);
	}
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
}
