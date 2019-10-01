#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll, ll>> map1;
map<ll, list<ll, ll>> map2;
map<ll, bool> visited;
vector<ll> order, connect;

void dfs1(ll src){
	visited[src] = true;
	for(auto neighbour: map1[src]){
		if(!visited[neighbour]){
			dfs1(neighbour);
		}
	}

	order.push_back(src);
}

void dfs2(ll src){
	visited[src] = true;
	connect.push_back(src);
	for(auto neighbour: map2[src]){
		if(!visited[neighbour]){
			dfs2(neighbour);
		0}
	}
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
for()

return 0;
}

