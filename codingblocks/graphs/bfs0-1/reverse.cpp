#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 1e9+2;
ll dis[MAX];
vector < vector < pair<int,int> > > vec;


void bfs1_0(int src){
	deque<ll> q;
	q.push_front(src);
	dis[src] = 0;
	while(!q.empty()){

		int top = q.front();
		q.pop_front();
		for(auto neighbour : vec[top]){
			int u = neighbour.first;
			int w = neighbour.second;
			if(dis[u]>dis[top]+w){
				dis[u] = dis[top]+w;
				if(w==1){
					q.push_back(u);
				}
				else
					q.push_front(u);
			}
		}

	}

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
for(int i=1; i<=n; i++){
		dis[i] = INT_MAX;
	}
for(int i =1; i<=m; i++){
	ll u, v;
	cin >> u >> v;
	vec[u].push_back({v, 0});
	vec[v].push_back({u, 1});
}
bfs1_0(1);
if(dis[n]==1e7)
	cout << -1;
else
	cout << dis[n];





return 0;
}

