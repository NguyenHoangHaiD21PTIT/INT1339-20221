#include<bits/stdc++.h>
using namespace std;

int cnt[500], n, c[500][500]={0}, x[500]={0}, visited[500]={0}, ans = INT_MAX;

int count(string a, string b){
	int d = 0;
	memset(cnt, 0, sizeof(cnt));
	for(int i=0;i<a.size();i++) cnt[a[i]-'0']++;
	for(int i=0;i<b.size();i++) cnt[b[i]-'0']++;
	for(char c = 'A'; c<='Z';c++){
		if(cnt[c-'0']>=2) d++;
	}
	return d;
}

void Try(int i, int sum){
	for(int j=1;j<=n;j++){
		if(visited[j]==0){
			x[i] = j;
			visited[j] =1;
			sum+=c[x[i-1]][x[i]];
			if(i==n) ans = min (ans, sum);
			else Try(i+1, sum);
			sum-=c[x[i-1]][x[i]];
			visited[j]= 0;
		}
	}
}
int main(){
	cin>>n;
	string s[500];
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			c[i][j] = count(s[i], s[j]);
			c[j][i] = c[i][j];
		}
	}
	Try(1,0);
	cout<<ans<<endl;
}