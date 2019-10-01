#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<pair<ll, ll>>> map1;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
set<pair<int, int>> set1;
ll n, m, c, k;
cin >> n >> m >> c >> k;
for(ll i =0; i<m; i++){
	ll u, v, w;
	cin >> u >> v>>w;
	map1[u].push_back({v, w});
	map1[v].push_back({u, w});
}

unordered_map<ll, ll> distance;
for(auto d : map1){
	distance[d.first] = INT_MAX;
}

ll src = c;
distance[src] = 0;
set1.insert({0, src});
while(!set1.empty()){
	auto point = *(set1.begin());
	ll dist = point.first;
	ll node = point.second;
	set1.erase(point);

	for(auto i : map1[node]){
		if(dist+i.second<distance[i.first]){
			auto f = set1.find({distance[i.first], i.first});
			if(f!=set1.end()){
				set1.erase(f);
			}
			distance[i.first] = dist + i.second;
			set1.insert({distance[i.first], i.first});
			
		}
	}

}	
ll count = 0;
for(int i=c+1; i<=n; i++){
	if(distance[i]<=k){
		count++;
	}
}

cout << count+1 << endl;





return 0;
}

