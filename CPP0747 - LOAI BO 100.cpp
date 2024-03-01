#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int ans=0;//so ki tu bi loai
		for(int i=0;i<s.size()-2;i++){
		 	if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
		 		ans+=3;
				s.erase(i, 3);//xoa 3 ki tu ke tu vi tri thu i
				//i=-1;//Xoa xong thi quay tro ve dau de xet lai xau moi
			}
		}
		if(ans!=0) cout<<ans<<endl;		
	}
}