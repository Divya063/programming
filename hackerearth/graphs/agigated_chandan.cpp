#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


class Graph{

	map<ll, list<pair<ll, ll>>> adjList;
	ll dist[N]={0};
	map<ll, bool> visited;

public:

	void addEdge(ll a, ll b, ll c){

		adjList[a].push_back({b, c});
		adjList[b].push_back({a, c});
	}
	
	ll bfs(ll src, ll n){
			queue<ll> q;
			for (ll i = 0; i <= n; i++) { 
			        visited[i] = 0; 
			        dist[i] = 0;
			    } 
			q.push(src);
			visited[src]=true;
  			dist[src]=0;
			while(!q.empty()){
				ll node=q.front();
				q.pop();
				for(auto i : adjList[node]){
					if(!visited[i.first]){
						q.push(i.first);
						visited[i.first]=true;
						dist[i.first]=dist[node]+i.second;
					}
				}
			}

			auto pr= max_element(dist, dist+n)-dist;
			return pr;
	}

	ll calculate(ll v){
		ll index= bfs(1, v);
		ll val= bfs(index, v);
		return dist[val];
	}


};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){
	ll v;
	cin>> v;
	Graph g;
	for(ll i=0; i<v-1;i++){
		ll a, b,c;
		cin >> a >> b >> c;
		g.addEdge(a, b, c);
	}

	ll ans = g.calculate(v);
	if(ans>10000){
		cout << 10000 << " " << ans << endl;
	}
	else if(ans>1000){
		cout << 1000 << " " << ans << endl;
	}
	else if(ans>100){
		cout << 100 <<" "<< ans <<endl;
	}
	else if(ans<100){
		cout << 0 << " " << ans <<endl;
	}
	
	
	

}
return 0;
}

