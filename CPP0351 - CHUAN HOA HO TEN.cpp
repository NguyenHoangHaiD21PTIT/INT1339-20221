#include<bits/stdc++.h>
using namespace std;
void VietHoa(string &x){//viet hoa chu cai dau
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string c1;
		getline(cin,c1);
		stringstream c2(c1);
		string token;
		vector<string>v;
		while(c2>>token){
		    v.push_back(token);
		}
		for(int i=0;i<v.size();i++){
			VietHoa(v[i]);
		}
		if(n==1){
			cout<< v[v.size()-1] <<" ";
			for(int i=0;i<=v.size()-2;i++){
				cout << v[i] << " ";
			}
		}
		if(n==2){
			for(int i=1;i<=v.size()-1;i++){
				cout << v[i] << " ";
			}
			cout<< v[0] <<" ";
		}
		cout<<endl;
	}
}
