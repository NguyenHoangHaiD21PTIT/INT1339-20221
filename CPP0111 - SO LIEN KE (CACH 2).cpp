#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string c;
		cin >> c;
		int pos=c.find("084");
		c.erase(pos,3);
		cout<<c<<endl;
	}
}
		
