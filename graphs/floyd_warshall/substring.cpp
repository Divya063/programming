#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> adjList;
bool hasCycle = false;
vector<bool> onStack;
vector<bool> visited;
map<char, ll> map1;
string s;


void dfs(ll src){
	onStack[src] = true;
	visited[src] = true;
	map1[s[src-1]]++;
	//cout << s[src-1] << endl;
	if(hasCycle)
		return;

	for(auto i : adjList[src]){
		if(onStack[i]== true){
			hasCycle = true;
			return;
		}
		if(!visited[i])
			dfs(i);

	}

	onStack[src] = false;

}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
onStack = vector<bool>(n+1, false);
visited = vector<bool>(n+1, false);
cin >> s;
for(int i=0; i<m; i++){
	ll u, v;
	cin >> u >> v;
	adjList[u].push_back(v);
	//adjList[v].push_back(u);
}
ll max1 = 0;

for(int i=1; i<=n; i++){
	if(!visited[i]){
		dfs(i);
		if(hasCycle){
			cout << -1 << endl;
			return 0;
		}
		for(auto i : map1){
		max1 = max(max1, i.second);
		}
		cout << max1 << endl;
	}
}

cout << max1;

return 0;
}

