#include<bits/stdc++.h>
using namespace std;
int check(string s){//kiem tra cac xau xem co la so co 9 chu so
	if(s.size()>9){//xau co 10 ki tu -> Loai
		return 0;
	} else {
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])==0){//chua ki tu khac so -->Loai
				return 0;
			} 
		}
		return 1;
	}
}
long long sum(string s){//Kiem tra cac xau co 9 chu so thi co nam trong kieu int hay khong. Neu co, cong vao
	if(check(s)==0){
		return 0;//xau khong hop le -> Khong tinh
	} else {
		long long n=stol(s);//chuyen xau s thanh so
		if(n >INT_MAX){//ngoai kieu int thi khong duoc tinh
			return 0;
		} else {
			return n;
		}	
	}
}
int main(){
	string s;
	long long tong=0;
	fstream infile;
	infile.open("DATA.in");
	while(infile>>s){
		tong+=sum(s);
	}
	cout<<tong<<endl;
}
	