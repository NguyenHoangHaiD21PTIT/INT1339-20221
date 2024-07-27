#include<bits/stdc++.h>
using namespace std;
struct ts{//thi sinh du thi
	int ma, share, tt, diem;//tt: tuong tac
};
bool cmp(ts a, ts b){
	if(a.diem!=b.diem){
		return a.diem>b.diem;
	}
	return a.ma<b.ma;
}
int main(){
	int n;
	cin>>n;
	ts a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].ma;
		cin>>a[i].share;
		cin>>a[i].tt;
		a[i].diem=a[i].share*7+a[i].tt*3;
	}
	sort(a,a+n,cmp);
	vector<int>res;
	for(int i = 0;i<7;i++) res.push_back(a[i].ma);
	sort(res.begin(), res.end());
	for(int x: res) cout<<x<<" ";
}
/*case:
10
1 10 2
2 5 7
3 20 100
4 10 20
5 100 70
6 1 1
7 0 2
8 2 0
9 10 11
10 12 13
*/
