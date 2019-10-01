#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 200000
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
pair<ll, pair<ll, ll>> p[MOD];
ll arr[MOD], size[MOD];

void initialize(){
	for(int i =0; i<MOD; i++){
		arr[i] = i;
		size[i] = 1;
	}
}

ll root(ll a){
	while(a!=arr[a]){
		arr[a] = arr[arr[a]];
		a = arr[a];
	}

	return a;
}

void union1(ll a, ll b){
	ll root_a = root(a);
	ll root_b = root(b);

	if(size[root_a] < size[root_b]){
		size[root_b]+=1;
		arr[root_a] = arr[root_b];
	}

	else{
		size[root_a]+=1;
		arr[root_b] = arr[root_a];
	}
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

while(1){
ll n, m;
cin >> n >> m;
if(!(n && m)){
	break;
}
initialize();
for(int i =0; i<m; i++){
	ll u, v, w;
	cin >> u >> v >> w;
	p[i] = make_pair(w, make_pair(u, v));
}
ll a, b;
cin >> a >> b;
sort(p, p+m);
ll mincost = 0;
ll totalcost = 0;
for(int i =0; i<m; i++){
	ll cost = p[i].first;
	ll x = p[i].second.first;
	ll y = p[i].second.second;
	totalcost+=cost;
	if(root(x)!= root(y)){ 
		mincost+=cost;
		union1(x, y);
	}

	
}

cout << totalcost- mincost << endl;
}

return 0;
}

