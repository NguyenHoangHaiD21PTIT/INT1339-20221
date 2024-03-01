#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma1="B20DCCN";
	string ma2;//maso
	string hoten,lop,ns;
	double gpa;
};
void nhap(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].hoten);
		cin>>ds[i].lop;
		cin>>ds[i].ns;
		cin>>ds[i].gpa;
	}
}
void solve(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		//Chuan hoa ngay sinh
		if(ds[i].ns[1]=='/'){
			ds[i].ns="0"+ds[i].ns;
		} 
    	if(ds[i].ns[4]=='/'){
			ds[i].ns.insert(3,"0");
		}
		//Chuan hoa masv
		ds[i].ma2=to_string(i+1);
		while(ds[i].ma2.size()<=2){
			ds[i].ma2="0"+ds[i].ma2;
		}
	    ds[i].ma1=ds[i].ma1+ds[i].ma2;
	}
}
void in(SinhVien ds[], int n){
	solve(ds,n);
	for(int i=0;i<n;i++){
		cout<<ds[i].ma1<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<" ";
		cout<<endl;
	}
}	
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
			
		

