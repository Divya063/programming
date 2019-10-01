#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
set<int>adjList[101];
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
queue<int>q;
for(int i=0;i<m;i++){
	ll a, b;
	cin >> a >> b;
	adjList[a].insert(b);
	adjList[b].insert(a);

}
int ans=0;

while(1){
for(int i=1;i<=n;i++){
	if(adjList[i].size()==1)
		q.push(i);
}

if(q.empty()){
	cout << ans << endl;
	break;
}
else
ans++;

while(!q.empty()){
		int s=q.front();
		q.pop();
		for(auto i: adjList[s]){
			adjList[i].erase(s);
		}	
		adjList[s].clear();

}

}



return 0;
}

