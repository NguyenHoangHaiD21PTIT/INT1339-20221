#include<bits/stdc++.h>
using namespace std; 

char a[100][100];
int hang, cot;
/*Cac cach di chuyen tu mot o(i,j) sang 4 o khac 
(Delta: Luong gia tri bi thay doi) theo thu tu: len tren, sang trai, sang phai, xuong duoi */
int delta_i[4]={-1,0,0,1};
int delta_j[4]={0,-1,1,0};

//Voi moi o = 1 bat dau tu vung bien tien hanh DFS
void DFS(int i, int j){
	a[i][j]='*';//o nay da xet
	//xet tiep 4 o bao quanh no
	for(int k=0;k<4;k++){
		int imoi=i+delta_i[k];
		int jmoi=j+delta_j[k];
		if(imoi>=1&&imoi<=hang-1&&jmoi>=0&&jmoi<=cot-1&&a[imoi][jmoi]=='O'){
			//Hang va cot di chuyen den con trong mang, o vua duoc loang ra =1
			DFS(imoi,jmoi);//Tiep tuc danh dau va xet tiep cac o xung quanh
		}
	}
}
//Sau buoc nay, toan bo cac o duoc danh dau '*" chinh la mien cac chu O vung bien (Khong thoa man, de nguyen)
//So chu O con lai la mien bi X bao quanh tu phia (Thay = x)
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
		//Thuc hien thu tuc DFS tren 4 duong bien: Tim tren do nhung o la 'O'
		//Tim tren 2 cot trai va phai ngoai cung
		for(int i=0;i<hang;i++){
			if(a[i][0]=='O'){//cot dau
				DFS(i,0);
			}
			if(a[i][cot-1]=='O'){//cot dau
				DFS(i,cot-1);
			}
		}
		//Tim tren 2 hang tren cung va duoi cung
		for(int i=0;i<cot;i++){
			if(a[0][i]=='O'){//hang dau
				DFS(0,i);
			}
			if(a[hang-1][i]=='O'){//hang cuoi
				DFS(hang-1,i);
			}
		}
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				if(a[i][j]=='*'){
					cout<<"O ";
				} else {
					cout<<"X ";
				}
			}
			cout<<endl;
		}
	}
}
		
		
