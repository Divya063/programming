#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> map1;
vector<ll> visited;

void dfs(ll src){
	visited[src] = 1;
	for(auto children: map1[src]){
		if(!visited[children]){
			dfs(children);
		}
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
int arr[n+1];
visited = vector<ll>(n+1, 0);
for(int i =1; i<=n; i++){
	cin >> arr[i];
	map1[arr[i]].push_back(i);
	map1[i].push_back(arr[i]);
}
ll connected =0;
for(int i =1; i<=n; i++){
	if(!visited[i]){
		dfs(i);
		connected++;
	}
}

cout << connected << endl;

return 0;
}

