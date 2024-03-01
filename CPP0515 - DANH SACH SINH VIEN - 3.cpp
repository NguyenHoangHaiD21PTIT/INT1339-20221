#include<bits/stdc++.h>
using namespace std;
//1. Khoi tao
struct SinhVien{
	string ma1="B20DCCN";
	string ma2;//maso
	string ma3;//copy ma 2 sang
	string hoten,lop,ns;
	double gpa;
};
//2. Chuan hoa tung thanh phan
void chuanhoa1(string &s){//Chuan hoa tung tu trong ten
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++){
    	s[i]=tolower(s[i]);
    }
}
void chuanhoa2(string &s1){//Chuan hoa va in ca xau ho ten
	stringstream s2(s1);//Dung xau s2 tach xau s1
	string token;//xau trung gian
	vector<string>v;
	while(s2>>token){//con luu duoc token vao s2
		v.push_back(token);
	}
	for(int i=0;i<v.size();i++){
		chuanhoa1(v[i]);
		cout<<v[i]<<" ";
	}	
}
void chuanhoa3(string &s){//chuan hoa ngay sinh
	if(s[1]=='/'){
		s="0"+s;
	}
	if(s[4]=='/'){
		s.insert(3,"0");
	}
}
void chuanhoa4(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		//Chuan hoa masv
		ds[i].ma2=to_string(i+1);
		while(ds[i].ma2.size()<=2){
			ds[i].ma2="0"+ds[i].ma2;
		}
	    ds[i].ma1=ds[i].ma1+ds[i].ma2;
	}
}
//3. Nhap
void nhap(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].hoten);
		cin>>ds[i].lop;
		cin>>ds[i].ns;
		cin>>ds[i].gpa;
	}
}
//4. So sanh theo tieu chi
bool cmp(SinhVien a, SinhVien b){
	if(a.gpa!=b.gpa){
		return a.gpa>b.gpa;
	}
}
void sapxep(SinhVien ds[], int n){
	chuanhoa4(ds,n);
	sort(ds,ds+n,cmp);
}
//5. In
void in(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].ma1<<" ";
		chuanhoa2(ds[i].hoten);
		cout<<ds[i].lop<<" ";
		chuanhoa3(ds[i].ns);
		cout<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
		cout<<endl;
	}
}	
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
			
		

