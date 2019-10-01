#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, bool> visited;
map<ll, list<ll>> adjList;
ll x[N], y[N];

void dfs(ll src){
	visited[src] = true;
	for(auto i : adjList[src]){
		if(!visited[i])
			dfs(i);
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;

for(int i =1; i<=n; i++){
	cin >> x[i] >> y[i];
}

for(int i =1 ; i<=n; i++){
	for(int j =1; j<=n; j++){
		if(i==j)
			continue;
		if(x[i]==x[j] || y[j]==y[i]){
			adjList[i].push_back(j);
		}
	}
}

ll components = 0;
for(int i =1; i<=n; i++){
		if(!visited[i]){
			dfs(i);
			components++;
		}
	}


cout << components-1;

return 0;
}

