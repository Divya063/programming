#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define dd double
const int N=1e5+5;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> map1;
map<ll, list<ll>> map2;
ll visited[N];
vector<int> order;
vector<int> component;
ll cost[N];

void dfs1(ll src){
	visited[src] = 1;
	for(auto neighbour : map1[src]){
		if(!visited[neighbour]){
			dfs1(neighbour);
		}
	}

	order.push_back(src);
}

void dfs2(ll src){
	visited[src] = 1;
	component.push_back(src);
	for(auto neighbour : map2[src]){
		if(!visited[neighbour]){
			dfs2(neighbour);
		}
	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
ll arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}
if(arr[0] & arr[n-1]){
	map1[0].push_back(n-1);
	map2[n-1].push_back(0);
}
for(int i=0; i<n-1; i++){
	cout << (arr[i] & arr[i+1]) << endl;
	if(arr[i]&arr[i+1]!=0){
		map1[i].push_back(i+1);
		map2[i+1].push_back(i);
		cout << arr[i]<< " " << arr[i+1];
	}
}
visited[n] = {0};
for(int i =0; i<n; i++){
	if(!visited[i]){
			dfs1(i);
	}
}

for(int i =0; i<n; i++){
	visited[i] = 0;
}
ll sum =0, ways=1;
ll ans = INT_MAX;
for(int i =0; i<n; i++){
	ll num = order[n-i-1];
	if(!visited[num]){
			component.clear();
			//cout << order[n-i-1] << endl;
			dfs2(num);
			//cout << order[n-i-1] << " "<< component.begin()->first;
			ll size = component.size();
			
			ans = min(ans, size);

			//cout << component.begin()->first << endl;
		
	}
}

cout << ans <<endl;



return 0;
}

