#include<bits/stdc++.h>
using namespace std;
int hang, cot, a[105][105];

/*Cac cach di chuyen tu mot o(i,j) sang 8 o khac 
(Delta: Luong gia tri bi thay doi) theo thu tu trai -> phai, tren->duoi */
int delta_i[8]={-1,-1,-1,0,0,1,1,1};
int delta_j[8]={-1,0,1,-1,1,-1,0,1};

//Voi moi o = 1 ta tien hanh DFS
void DFS(int i, int j){
	a[i][j]=0;//o nay da xet
	//xet tiep 8 o bao quanh no
	for(int k=0;k<8;k++){
		int imoi=i+delta_i[k];
		int jmoi=j+delta_j[k];
		if(imoi>=0&&imoi<=hang-1&&jmoi>=0&&jmoi<=cot-1&&a[imoi][jmoi]==1){
			//Hang va cot di chuyen den con trong mang, o vua duoc loang ra =1
			DFS(imoi,jmoi);//Tiep tuc danh dau va xet tiep cac o xung quanh
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>hang>>cot;
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				if(a[i][j]==1){//Bat dau co mien moi
					dem++;
					DFS(i,j);
				}
			}
		}
		cout<<dem<<endl;
	}
}