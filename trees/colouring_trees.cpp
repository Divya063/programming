#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<int, list<int>> adjList;
int ans=1;
int color[N];
void dfs(int src){

	for(auto i: adjList[src]){
		if(color[src]!=color[i])
			ans++;
		dfs(i);
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;

for(ll i=2;i<=n;i++){
	ll a;
	cin >> a;
	adjList[a].push_back(i);
}

for(int i =1; i<=n ;i++){
	cin  >> color[i];
}
dfs(1);
cout << ans;

return 0;
}

