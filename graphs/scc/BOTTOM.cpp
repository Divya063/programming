#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<ll, list<ll>> map1;
map<ll, list<ll>> map2;
vector<ll> ordered, component(N, 0);
bool visited[N];

void dfs(ll src){
	visited[src] = true;
	for(auto neighbour: map1[src]){
		if(!visited[neighbour]){
			dfs(neighbour);
		}
	}

	ordered.push_back(src);
}


void dfs1(ll src, ll c){
	visited[src] = true;
	component[src] = c;
	for(auto neighbour: map2[src]){
		if(!visited[neighbour]){
			dfs1(neighbour, c);
		}
	}
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
while(1){
	cin >> n;
	if(n==0)
		break;
	cin >> m;
	for(int i =0; i<m ; i++){
		int a,b;
		scanf( "%d%d", &a, &b );
		//cout << a << b;
	map1[a].push_back(b);
	map2[b].push_back(a);
}


	for(int i =1; i<=n; i++){
		if(!visited[i]){
			cout <<"here";
		dfs(i);
	}
	}

	ll c = 0;
	bool ans[N];
	for(ll i =0; i<n; i++){
		ll num = ordered[n-1-i];
		if(!visited[num]){
			cout << "here1";
		component.clear();
		c++;
		dfs1(num, c);
		ans[num] = true;

	}
	}

	for(ll i = 1; i<=n; i++){
		for(auto j : map1[i]){
			// should be no outer edge
			if(component[i] != component[j]){
				ans[i]= false;
				break;
			}
		}
	}

	for(int i =1; i<=n; i++){
		if(ans[i]){
			cout << i << " ";
		}
	}

	for(int i =1; i<=n; i++){
		map1.clear();
		map2.clear();
		visited[i]=false;

	}
	component.clear();
	ordered.clear();


}
}

