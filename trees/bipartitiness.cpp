#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> map1;
vector<ll> visited;
ll color[3];

void dfs(ll src, ll c){
	color[c]++;
	visited[src] = 1;
	for(auto neighbour: map1[src]){
		if(!visited[neighbour]){
			dfs(neighbour, !c);
		}
		
	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
visited = vector<ll>(n+1, 0);
for(int i =0; i<n-1; i++){
	ll a, b;
	cin >> a >> b;
	map1[a].push_back(b);
	map1[b].push_back(a);
}
dfs(1, 0);
cout << ((color[0]*color[1])-(n-1)) << endl;
return 0;
}

