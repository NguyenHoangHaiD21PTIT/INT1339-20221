#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string h;
		cin>>h;
		set<char>s;
		int check=1;//dieu kien khong chua ky tu khac ngoai so va chu so dau khac 0
		for(int i=0;i<h.size();i++){
			if(h[0]=='0'){
				check=0;
				break;
			} else {
				if(isdigit(h[i])){//la so day vao set
				    s.insert(h[i]);
				} else {
					check=0;
					break;
				}
			}
		}
		if(check==0){
			cout <<"INVALID"<<endl;
		} else {
			if(s.size()==10){
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}
	}
}
				
					
			
