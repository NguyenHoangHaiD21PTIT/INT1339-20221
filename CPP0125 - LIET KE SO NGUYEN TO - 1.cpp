#include<bits/stdc++.h>
using namespace std;
int nt[100050];
void sang(){
	for(int i =0;i<=100050;i++){
		nt[i]=1;
	}
	nt[0]=0;nt[1]=0;
	for(int i=0;i<=sqrt(100050);i++){
		if(nt[i]==1){
			for(int j=i*i;j<100050;j+=i){
				nt[j]=0;
			}
		}
	}
}
int main() {
	sang();
	int a, b;
	cin >> a >>b;
	if (a > b) {
		swap(a,b);
	}
	for(int i=a; i <=b; i++) {
		if(nt[i] ==1) {
			cout << i << " ";
		}
	}
}

