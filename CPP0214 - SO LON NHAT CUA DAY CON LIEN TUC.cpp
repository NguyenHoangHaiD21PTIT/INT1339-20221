#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		multiset<int>ms;
		for(int i=0;i<k;i++){
			ms.insert(a[i]);
		}
		cout<<*ms.rbegin()<<" ";
	    for(int i=k;i<n;i++){
	    	//Xoa di phan tu dau tien cua cua so truot dau tien va chen phan tu cuoi cung cua so truot tiep theo
	    	ms.erase(ms.find(a[i-k]));
	    	ms.insert(a[i]);
	    	cout<<*ms.rbegin()<<" ";
	    }
	    cout<<endl;
	}
}
	    	
