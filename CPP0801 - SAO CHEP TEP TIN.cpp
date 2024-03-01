#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream infile;
	fstream outfile;
	infile.open("PTIT.in");
	outfile.open("PTIT.out");
	string s;
	while(getline(infile,s)){
		outfile<<s<<endl;
	}
	infile.close();
	outfile.close();
}