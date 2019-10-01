#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int N = 2e5 + 2;
map<ll, list<int>> map1;
ll arr[N], sum[N], dp[N], total_sum;

void dfs(ll src, ll level, ll parent){
	dp[1]+=level*arr[src];
	sum[src] = arr[src];
	for(auto u : map1[src]){
		if(parent == u)
			continue;
		dfs(u, level+1, src);
		sum[src]+=sum[u];
	}
}

void dfs1(ll src, ll parent){
	for(auto n : map1[src]){
		if(parent == n)
			continue;
		dp[n]+=dp[src]+(total_sum)-2*sum[n];
		dfs1(n, src);

	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;

for(ll i = 1; i<=n; i++){
	cin >> arr[i];
	total_sum+=arr[i];
}
for(ll i =0; i<n-1; i++){
	ll u, v;
	cin >> u >> v;
	map1[u].push_back(v);
	map1[v].push_back(u);
}
dfs(1, 0, -1);
dfs1(1, -1);
ll ans = 0;
for(ll i=1; i<=n; i++){
	ans = max(ans, dp[i]);
}

cout << ans << endl;


return 0;
}

