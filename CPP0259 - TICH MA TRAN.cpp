#include <iostream>
using namespace std;
int main(){
	int n,m,p;
	long long s;
	cin>>n>>m>>p;
	int a[n][m], b[m][p];
	for(int i=0 ; i<n ; i++){
		for(int j=0; j<m; j++){
		    cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0 ; j<p; j++){
		    cin>>b[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			s=0;
			for(int k=0; k<m; k++) s=s + a[i][k]*b[k][j];
			cout<<s<<" ";
		}
		cout<<endl;
	}
}

