#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

struct Edge{
	ll a, b, cost;
};

vector<Edge> edges;
ll n, m;

void solve(){

	vector<ll> d(n);
	ll x;
	vector<ll> p(n, -1);
	for (int i = 0; i < n; ++i) {
       x = -1;
	for(Edge e: edges){
		if(d[e.a]+ e.cost < d[e.b]){

			d[e.b] = d[e.a] + e.cost;
			p[e.b] = e.a;
			x = e.a;
			}
		}
	}

	if(x==-1){
		cout << "not possible" << endl;
	}

	else{
		cout << "possible" << endl;
	}
	/*
	print cycles
	for(int i =0; i<n; i++){
		x = p[x];
	}

	vector<ll> cycle;

	for(int v = x;; v = p[v]){
		cycle.push_back(v);

		if(v==x && cycle.size()>1){
			break;
		}
	}

	for(auto i : cycle){
		cout << i << " ";
	}*/

}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll t;
cin >> t;
while(t--){
	cin >> n >> m;
	for(int i =0; i<m; i++){
		Edge e;
		cin >> e.a >>e.b >> e.cost;
		edges.push_back(e);
	}
	solve();

	edges.clear();

}

return 0;
}

