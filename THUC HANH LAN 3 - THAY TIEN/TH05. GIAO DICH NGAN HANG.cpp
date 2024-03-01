#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin.ignore();
		string name;
		getline(cin, name);
		int n;//so giao dich
		cin>>n;
		long long x;
		long long tong=0;//tong chi tieu
		for(int i=0;i<n;i++){
			cin>>x;
			if(x<0){//so am--> tien bo ra
				tong+=abs(x);
			}
		}
		if(tong>=100000000){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
/*1
Nguyen Van Nam
5
100000 5000000 -1000000 -2000000 -10000 */
