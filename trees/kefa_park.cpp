#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x <':' << x << endl;
map<ll, list<int>> adjList;
vector<ll> visited;
vector<ll> m;
ll ans, k;

void dfs(int src, int M){
	visited[src] = 1;
	//cout << M << endl;

	if(M>k)
		return;
	if(adjList[src].size()==1 && src !=1){
		if(M<=k){
			ans++;
		}
	}
		
	for(auto neighbour: adjList[src]){

		if(!visited[neighbour]){
			if(m[neighbour]){
				dfs(neighbour, M+1);
			}
			else
				dfs(neighbour, 0);
		}
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n >> k;
visited = vector<ll>(n+1, 0);
m = vector<ll>(n+1, 0);
for(int i =1; i<=n; i++){
	ll a;
	cin >> a;
	m[i]=a;
}

for(int i =0; i<n-1; i++){
	ll u, v;
	cin >> u >> v;
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}

dfs(1, m[1]);

cout << ans;

return 0;
}

