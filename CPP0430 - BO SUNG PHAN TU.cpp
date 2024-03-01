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
		int p=*s.rbegin()-*s.begin()+1;//So phan tu trong doan[min;max]
		int kq=p-s.size();
		cout<<kq<<endl;
	}
}
		
