#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		//Tách các từ trong xâu ra và lưu vào 1 vector
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		vector<string>vs;
		while(ss>>token) vs.push_back(token);
		
		//Chọn từ sao cho độ dài văn bản kết quả <=100
		int length=0;//chiều dài của văn bản kết quả
		for(int i=0;i<vs.size();i++){
			length+=vs[i].size();
			//Mục đích là để xem chiều dài văn bản kết quả nếu nối từ ấy vào còn thỏa mãn hay không
			//Thỏa mãn thì nối vào
			if(length<=100){ //Nếu chiều dài thỏa mãn thì ghi nhận từ đó
				cout<<vs[i]<<" ";
				length+=1;//Chiều dài văn bản kết quả tăng thêm 1, vì sau mỗi từ tách được là 1 dấu cách
			} else { //Chiều dài không thỏa mãn thì thôi không nối vào xâu kết quả nữa
				break;
			}	
		}
		cout<<endl;
	}
}
