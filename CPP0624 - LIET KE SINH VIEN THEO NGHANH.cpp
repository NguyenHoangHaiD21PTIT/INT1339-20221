#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, ten, lop, mail;
};
int main(){
	int n;
	cin>>n;
	cin.ignore();
	SinhVien ds[n];
	for(int i=0;i<n;i++){
		getline(cin, ds[i].msv);
		getline(cin, ds[i].ten);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].mail);
	}
	int t;//so truy van va ghi nghanh dao tao
	cin>>t;
	cin.ignore();
	while(t--){
		string s;//nghanh dao tao
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			s[i]=toupper(s[i]); //viet hoa 
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
		//B21DC C N319
		//Ki tu thu 0 trong msv the hien D hoac E. Ki tu thu 5 trong msv the hien nghanh
		for(int i=0;i<n;i++){
			if(ds[i].lop[0]=='E'&&(ds[i].msv[5]=='C'||ds[i].msv[5]=='A')){//Tru cac lop E cua CNTT va ATTT
				continue;
			}
			if(ds[i].msv[5]==s[0]){
				cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].mail<<endl;
			}
		}
	}
}
/*4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
1
Ke toan */
