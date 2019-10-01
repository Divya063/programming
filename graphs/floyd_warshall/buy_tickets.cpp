#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<pair<ll, ll>>> adj;




int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n,m;
cin >> n >> m;
for(ll i=0; i<m; i++){
	ll u, v, w;
	cin >> u >> v >> w;
	adj[u].push_back({v, w});
	adj[v].push_back({u, w});
} 
set<pair<ll, ll>> s;

ll dist[n+1];
ll visited[n+1];
memset(visited, 0, sizeof(visited));

for(ll i=1; i<=n; i++){
	ll a;
	cin >> a;
	dist[i] = a;
	s.insert({dist[i], i});
}
while(!s.empty()){
auto point = *s.begin();
auto w = point.first;
auto f = point.second;
s.erase(point);
if(visited[f])
	continue;
visited[f] = 1;
for(auto neighbour : adj[f]){
	ll v = 2*neighbour.second + w;
	if(visited[neighbour.first] || dist[neighbour.first] < v){
		continue;
	}
	dist[neighbour.first] = v;
	s.insert({dist[neighbour.first], neighbour.first});

}
}

for(ll i=1; i<=n; i++){
	cout << dist[i] << " ";
}




return 0;
}

