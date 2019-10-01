#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 2e5+2;
vector<ll> adj[MAX], actual;
ll visited[MAX];
ll ordering[MAX];


vector<ll> bfs(ll src){
	queue<ll> q;
	q.push(src);
	visited[src] = 1;
	while(!q.empty()){
		auto top = q.front();
		actual.push_back(top);
		q.pop();
		for(auto neighbour : adj[top]){
			if(!visited[neighbour]){
				q.push(neighbour);
				visited[neighbour] = 1;
			}
		}
	}

	return actual;
}

bool compare(int a, int b){
	return ordering[a] < ordering[b];
 }



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
for(int i =0; i<n-1; i++){
	ll u, v;
	cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
}
vector<ll> given_order;
vector<ll> act;
for(int i=0; i<n; i++){
	ll a;
	cin >> a;
	ordering[a] = i;
	given_order.push_back(a);
}

for(int i=1; i<=n; i++){
	sort(adj[i].begin(), adj[i].end(), compare);
}

act = bfs(1);

if(act==given_order){
	cout << "Yes" << endl;
}
else{
	cout << "No" << endl;
}

return 0;
}

