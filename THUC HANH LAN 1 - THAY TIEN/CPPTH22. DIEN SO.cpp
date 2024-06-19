#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int>s;
		while(n--){
			int x;
			cin>>x;
			s.insert(x);
		}
		cout<<*s.rbegin()-*s.begin()+1-s.size()<<endl;
		//*s.rbegin()-*s.begin()+1 la so phan tu trong [min;max]
		//s.size() la so pt khac nhau
	}
}
