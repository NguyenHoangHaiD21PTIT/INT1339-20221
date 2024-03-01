#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	getchar();
	while(t--){
	    char c;
	    cin >> c;
	    if(c>='a'&&c<='z'){
	    	c=toupper(c);
	    } else if (c>='A'&&c<='Z'){
	    	c= tolower(c);
	    }
	    cout<<c<<endl;
	}
}
