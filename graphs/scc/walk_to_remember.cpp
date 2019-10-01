#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> adjList;
map<ll, list<ll>> adjList1;
bool visited[N];
vector<ll> component, order;

void init(){
	for(int i =0; i<N; i++){
		visited[i] = false;
	}
}

void dfs(ll src){
	visited[src] = true;
	for(auto neighbour : adjList[src]){
		if(!visited[neighbour]){
			dfs(neighbour);
		}
	}

	order.push_back(src);
}

void dfs2(ll src){

	visited[src] = true;
	component.push_back(src);
	for(auto neighbour : adjList1[src]){
		if(!visited[neighbour]){
			dfs2(neighbour);
		}
	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
for(int i =0; i<m; i++){
	ll a,b;
	cin >> a >>b;
	adjList[a].push_back(b);
	adjList1[b].push_back(a);
}

for(int i =1; i<=n; i++){
	if(!visited[i]){
		dfs(i);
	}
}

init();
ll arr3[n+1]={0};
for(int i =0; i<n; i++){
	ll num = order[n-1-i];
	if(!visited[num]){
		component.clear();
		dfs2(num);
		//cout << component.size() << endl;
		if(component.size()>1){
		for(auto i : component){
				arr3[i-1] = 1;
		}
		}
	}
}

for(int i =0; i<n; i++){
	cout << arr3[i] << " ";
}


return 0;
}

