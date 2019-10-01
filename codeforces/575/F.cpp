#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int num = 2e5;
struct node{
	int u,v;
	ll w;
}e[num];

bool comp(node a, node b){
	return a.w < b.w;
}

vector<ll> ans;

map<ll, list<pair<ll, ll>>> adjList;
map<ll, ll> dist;

void addEdge(ll u, ll v, ll w){
	adjList[u].push_back({v, w});
	adjList[v].push_back({u, w});
}

void dijikstra(int src){
	for (auto k : adjList){
		dist[k.first] = INT_MAX;
	}
	dist[src] = 0;
	set<pair<ll, ll>> set1;
	set1.insert({0, src});
	while(!set1.empty()){
	auto data = *set1.begin();
	ll distance = data.first;
	ll source = data.second;
	set1.erase(data);
	for(auto j : adjList[source]){
		if(distance + j.second < dist[j.first]){

			auto f = set1.find({dist[j.first], j.first});
			if(f != set1.end()){
				set1.erase(f);
			}

			dist[j.first] = distance + j.second;
			set1.insert({dist[j.first], j.first});
		}
	}

	for(auto i : dist){
		if(i.second != 0)
		ans.push_back(i.second);
	}

}


}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m, k;
cin >> n >> m >> k;
for(ll i =0; i<m; i++){
	ll u, v, w;
	cin >> e[i].u >> e[i].v >> e[i].w;
}
sort(e, e+m, comp);

for(ll i =0; i<min(k, m); i++){
	ll u = e[i].u;
	ll v = e[i].v;
	ll w = e[i].w;
	addEdge(u, v, w);
}

for(int i = 1; i<=k; i++){
	dijikstra(i);
}

sort(ans.begin(), ans.end());
cout << ans[k-1];



return 0;
}

