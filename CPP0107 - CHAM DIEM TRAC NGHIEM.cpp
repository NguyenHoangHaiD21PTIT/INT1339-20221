#include<bits/stdc++.h>
using namespace std;
int main() {
	char s101[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char s102[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char s[15];
		double diem=0;
		for(int i=0; i<15; i++) {
			cin >> s[i];
		}
		//Moi cau dung duoc 2/3 diem
		if(n==101) {
			for(int i=0; i<15;i++) {
				if(s101[i]==s[i]) {
					diem += float(2)/3;
				}
			}
		}
		else if(n==102) {
			for(int i=0; i<15;i++) {
				if(s102[i]==s[i]) {
					diem += float(2)/3;
				}
			}
		}
		cout << setprecision(2)<<fixed<<diem << endl;
	}
}
/* Cach 2:
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s101= "A B B A D C C A B D C C A B D";
	string s102= "A C C A B C D D B B C D D B B";
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cin.ignore();
		double diem=0;
		string s;
		getline(cin,s);
		//Moi cau dung duoc 2/3 diem
		if(n==101) {
			for(int i=0; i<s.size();i+=2) {
				if(s101[i]==s[i]) {
					diem += float(2)/3;
				}
			}
		}
		else if(n==102) {
			for(int i=0; i<s.size();i+=2) {
				if(s102[i]==s[i]) {
					diem += float(2)/3;
				}
			}
		}
		cout << setprecision(2)<<fixed<<diem << endl;
	}
}
*/
