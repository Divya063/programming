#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<ll, list<ll>> adjList;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
vector<ll> visited(n+1, 0);
ll arr[n+1];
for(int i =1; i<=n; i++){
	cin >> arr[i];
}

for(int i =1; i<=n; i++){
	if(arr[i]==-1)
		continue;
	adjList[arr[i]].push_back(i);
	adjList[i].push_back(arr[i]);
}

vector<ll> level(n+1, 1);
ll ans = 0;

for(int i =1; i<=n; i++){
		if(arr[i]!=-1)
			continue;
		ll src = i;
		queue<ll> q;
		q.push(src);
		ll max1 =1;
		visited[src]=1;
		while(!q.empty()){
			ll node = q.front();
			q.pop();
			for(auto ind : adjList[node]){
				if(visited[ind])
					continue;
				visited[ind] = 1;
				q.push(ind);
				level[ind]=level[node]+1;
				max1 = max(max1, level[ind]);
			}

		}

		ans = max(ans, max1);
}

cout << ans;

return 0;
}

