#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000010
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<int, list<pair<int, int>>> map1;
vector<ll> distan (N, 1e18);
ll parent[N];

void addEdge(ll u, ll v, ll w){
	map1[u].push_back({v, w});
	map1[v].push_back({u, w});
}

void dijkstra(ll src){

	parent[1] = -1;
	distan[src] = 0;
	set<pair<ll, ll>> set1;
	set1.insert({0, src});
	while(!set1.empty()){
		auto point = *(set1.begin());
		ll dist = point.first;
		ll node = point.second;
		set1.erase(point);

		for(auto neighbour : map1[node]){
			if(dist + neighbour.second < distan[neighbour.first]){
				parent[neighbour.first] = node;

				auto f = set1.find({distan[neighbour.first],neighbour.first});
				if(f!= set1.end()){
					set1.erase(f);
				}
				distan[neighbour.first] = dist + neighbour.second;
				set1.insert({distan[neighbour.first],neighbour.first});
			}
		}

	}
}

int main(){

	ll m, n;
	cin >> m >> n;
	for(int i =0; i<n; i++){
		ll u, v, w;
		cin >> u >> v >> w;
		addEdge(u, v, w);
	}

	dijkstra(1);
	vector<ll> ans;
	ll x = m;
	if(distan[m]==INT_MAX){
		cout << -1;
		return 0;
	}
	while(x!=-1){
		ans.push_back(x);
		x = parent[x];
		
	}
	reverse(ans.begin(), ans.end());
	for(auto i : ans){
		cout << i << " ";
	}

}
