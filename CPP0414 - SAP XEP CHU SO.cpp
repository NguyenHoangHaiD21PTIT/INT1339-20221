#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    cin.ignore();
		int n;
		cin >>n;
		set<char>b;
		while(n--){
			string c;
			cin>>c;
			for(int i=0;i<c.size();i++){
				b.insert(c[i]);
			}
		}
		for(auto x: b){
			cout << x << " ";
		}
		cout <<endl;
	}
}
			
