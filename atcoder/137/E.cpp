#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll parent[N];

class Graph{

	map<ll, list<pair<ll, ll>>> adjList;

public:

	void addEdge(ll u, ll v, ll w){

		adjList[u].push_back({v, w});
		//adjList[v].push_back({u, w});
	}

	void dijikstra(ll src){
		set<pair<ll, ll>> set1;
		unordered_map<ll, ll> dist;
		parent[src] = -1;
		for(auto m: adjList){

			dist[m.first] = 100000000000LL;
		}

		set1.insert({0, src});
		while(!set1.empty()){
		auto n = *(set1.begin());
		
		ll distance = n.first;
		ll node = n.second;
		set1.erase(n);

		for(auto neighbour : adjList[node]){

			if(distance + neighbour.second < dist[neighbour.first]){
	

				auto f = set1.find({dist[neighbour.first], neighbour.first});
				if(f != set1.end()){
					set1.erase(n);
				}

				dist[neighbour.first] = distance + neighbour.second;
				set1.insert({dist[neighbour.first], neighbour.first});
			}
		}


	}

}



};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);


return 0;
}

