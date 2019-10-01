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
//ios_base& scientific (ios_base& str);
ll t;
cin >> t;
while(t--){
	map<int, list<int>> adjList;
	map<int, bool> visited;
	ll n, m;
	cin >> n >> m;
	for(ll i=0;i<m;i++){
		ll p, q;
		cin >> p >> q;
		adjList[p].push_back(q);
		adjList[q].push_back(p);

	}
	map<int, int> dist;

	queue<ll> q;
	q.push(1);
	dist[1]=0;
	visited[1]=true;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto i :adjList[node]){
			if(!visited[i]){
				dist[i]=dist[node]+1;
				visited[i] = true;
				q.push(i);
			}
		}
	}
	cout << dist[n] << endl;

}

return 0;
}

