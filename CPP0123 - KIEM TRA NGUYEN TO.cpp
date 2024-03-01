#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if(n<2) {
		cout << "NO";
	} else {
		int check=1;
		for(int i=2; i<=sqrt(n); i++) {
			if(n%i==0) {
				check=0;
				break;
		    }
	    }
	    if(check==0){
	    	cout<<"NO";
	    } else {
	    	cout<<"YES";
	    }
	}
}

