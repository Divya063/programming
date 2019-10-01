#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 2e5+2;
ll size[MAX], root[MAX];
pair<ll, pair<ll, ll>> p[MAX];

void init(ll n){
	for(ll i=1; i<=n; i++){
		root[i] = i;
		size[i]=1;
	}
}


ll parent(ll a){
	while(root[a]!=a){
		root[a] = root[root[a]];
		a = root[a];
	}

	return a;
}

void union1(ll a, ll b){
	ll root_a = parent(a);
	ll root_b = parent(b);
	if(size[a]>size[b]){
		size[a]+=1;
		root[root_b] = root[root_a];
	}

	else{
		size[b]+=1;
		root[root_a] = root[root_b];
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
init(n);
ll arr[n+1];
ll min = 1;
for(ll i=1; i<=n; i++){
	cin >> arr[i];
	if(arr[min]>arr[i])
		min = i;
}

for(ll i=1; i<=n; i++){
	ll weight = arr[i]+arr[min];
	//cout << weight << endl;
	p[i].first=weight;
	p[i].second.first = min;
	p[i].second.second = i; 
}
for(ll i = n+1; i<=n+m; i++){
	ll u, v, w;
	cin >> u >> v >> w;
	p[i] = make_pair(w, make_pair(u, v));
}
m+=n;
//cout << m << endl;
sort(p, p+m+1);
ll cost = 0;
for(ll i=1; i<=m; i++){
	ll edge = p[i].second.first;

	ll edge2 = p[i].second.second;
	//cout << edge << " " << edge2 << " " << p[i].first << endl;
	if(parent(edge)!=parent(edge2)){
	union1(edge, edge2);
	cost+= p[i].first;
	//cout << cost << endl;
}
	//cout << i << " " << cost << endl;

}

cout << cost << endl;


return 0;
}

