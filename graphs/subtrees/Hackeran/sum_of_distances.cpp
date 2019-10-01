#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<pair<ll, ll>>> adjList;
const int max1 = 2e5+2;
ll dp[max1], dist[max1], dist_nodes;

void dfs(ll src, ll parent){

	for(auto neighbour : adjList[src]){
		if(neighbour.first==parent)
			continue;
		dist_nodes+=neighbour.second;
		dist[neighbour.first] += dist_nodes;
		//cout << dist[neighbour.first];
		dfs(neighbour.first, src);
	}

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){
	ll edge;
	cin >> edge;
	for(ll i =0; i<edge-1; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		adjList[u].push_back({v, w});
		adjList[v].push_back({u, w});
	}

dfs(2, -1);
ll ans = 0;
for(int i=1; i<=edge; i++){
	cout << dist[i] << endl;
	ans+=dist[i];
	//cout << ans << endl;
}
cout << ans << endl;

}

return 0;
}

