#include<bits/stdc++.h>
using namespace std;

char so(char x){
	if(x=='A'||x=='K'){
		return '0';
	} else if (x=='B'||x=='L'){
		return '1';
	} else if (x=='C'||x=='M'){
		return '2';
	} else if (x=='D'||x=='N'){
		return '3';
	} else if (x=='E'||x=='O'){
		return '4';	
	} else if (x=='F'||x=='P'){
		return '5';	
	} else if (x=='G'||x=='Q'){
		return '6';	
	} else if (x=='H'||x=='R'){
		return '7';	
	} else if (x=='I'||x=='S'){
		return '8';	
	} else if (x=='J'||x=='T'){
		return '9';	
	} else {
		return '-';
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		string res = "";
		for(int i = 0;i<s2.size();i++){
			if(isalpha(s2[i])) res = res+so(s2[i]);
		}
		if(res==s1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}