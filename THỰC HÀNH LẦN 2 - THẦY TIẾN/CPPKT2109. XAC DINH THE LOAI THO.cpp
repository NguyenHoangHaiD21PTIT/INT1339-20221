#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int>v;//luu so tu trong cau do
	getchar();
	while(t--){
		//tach tu trong cau tho, dem xem moi cau bao nhieu tu
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		int dem=0;
		while(ss>>tmp){
			dem++;
		}
		v.push_back(dem);
	}
		vector<int>tho;
		//xet tung cau tho voi so cau da co
		for(int i=0;i<v.size();i++){
			if(v[i]==6){//bat dau 1 cau bai luc bat
				tho.push_back(1);
				while(v[i]==6||v[i]==8){
					i++;
				}
			}
			if(v[i]==7){//bat dau bai duong luat
				tho.push_back(2);
				i=i+3;//mac dinh bai duong chi co 4 cau
			}
		}
		cout<<tho.size()<<endl;
		for(auto x:tho){
			cout<<x<<endl;
		}
}
