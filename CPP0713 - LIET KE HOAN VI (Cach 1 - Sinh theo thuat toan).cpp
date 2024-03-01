#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void kt(){
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
}
void sinh(){
	int i=n-2;
	while(i>=0&&a[i]>a[i+1]){
		i--;
	}
	if(i==-1){
		ok=0;
	} else {
		int j=n-1;
		while(a[i]>a[j]){
			j--;
		}
		swap(a[i], a[j]);
		reverse(a+i+1, a+n);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		kt();
		ok=1;
		while(ok==1){
			for(int i=0;i<n;i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
}
