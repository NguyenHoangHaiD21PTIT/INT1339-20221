#include<bits/stdc++.h>
using namespace std;
char so(char c){
	char x;
	if(c=='a'||c=='b'||c=='c'){
	    x='2';
	} else if(c=='d'||c=='e'||c=='f'){
		x='3';
	} else if(c=='g'||c=='h'||c=='i'){
		x='4';
	} else if(c=='j'||c=='k'||c=='l'){
		x='5';
	} else if(c=='m'||c=='n'||c=='o'){
		x='6';
	} else if(c=='p'||c=='q'||c=='r'||c=='s'){
		x='7';
	} else if(c=='t'||c=='u'||c=='v'){
		x='8';
	} else if(c=='w'||c=='x'||c=='y'||c=='z'){
		x='9';
	}
	return x;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
			s[i]=so(s[i]);
		}
		int check=1;
		for(int i=0;i<=(s.size())/2;i++){
			if(s[i]!=s[s.size()-i-1]){
				check=0;
				break;
			}
		}
		if(check==1){
		    cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}  
    } 
}
		

	
	
