#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


map<ll, list<pair<ll,ll>>> adjList;
map<ll, list<pair<ll, ll>>> adjList1;
bool visited[N];
vector<ll> component, order;
ll max_num=-1, min_num=INT_MAX;
pair<ll, ll> p;

void dfs(ll src){
	visited[src] = true;
	for(auto i: adjList[src]){
		if(!visited[i.first]){
			dfs(i.first);

		}
	}
	order.push_back(src);
}

void dfs1(ll src){
	visited[src] = true;
	for(auto i: adjList1[src]){
		if(!visited[i.first]){
			max_num = max(max_num, i.second);
			min_num = min(min_num, i.second);
			
			dfs1(i.first);
		}
	}

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
for(int i =0; i<m; i++){
	ll u, v, w;
	cin >> u >> v >> w;
	adjList[u].push_back({v, w});
	adjList1[v].push_back({u, w});
}

return 0;
}

