#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 1e6;
map<ll, list<ll>> adjList;
bool visited[MAX];
ll add;
ll sum[MAX];
ll sum_node[MAX];

void dfs(ll src, ll val){

	visited[src] = true;
	val += sum[src];
	sum_node[src] = val;
	for(auto i: adjList[src]){
		if(!visited[i]){
			dfs(i, val);
		}
	}
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
for(int i =0; i<=n; i++){
	sum_node[i] = 0;
	sum[i] = 0;
}
for(int i =0; i<n-1; i++){
	ll a, b;
	cin >> a >>b;
	a--;
	b--;
	adjList[a].push_back(b);
	adjList[b].push_back(a);
}

for(int i =0; i<m; i++){
	ll u, v;
	cin >> u >> v;
	u--;
	sum[u] += v;
}

dfs(0, 0);

for(int i =0; i<n; i++){
	cout << sum_node[i] << " ";
}

return 0;
}

