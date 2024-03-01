#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream infile;
	infile.open("DATA.in");
    int n, m;
	infile>>n>>m;
	set<int>s1;//luu mang a
	set<int>s2;//luu mang b
	while(n--){//nhap mang a
		int x;
		infile>>x;
		s1.insert(x);
	}
	while(m--){
		int y;
		infile>>y;
		s2.insert(y);
	}
	for(auto x:s1){
		if(s2.find(x)!=s2.end())cout<<x<<" ";
	}
	cout<<endl;
}
