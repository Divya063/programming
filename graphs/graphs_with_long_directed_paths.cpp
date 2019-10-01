#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 2e5+2;
map<ll, list<ll>> adjList;
ll visited[MAX], level[MAX];



void bfs(ll src){
	queue<ll> q;
	q.push(src);
	visited[src]= 1;
	level[src]=1;
	while(!q.empty()){
		ll front = q.front();
		q.pop();
		for(auto n : adjList[front]){
			if(!visited[n]){
				q.push(n);
				visited[n]=1;
				level[n]=level[front]+1;
			}

		}
	}
}


// bfs approach
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
vector<pair<int, int>> vec;
for(int i=0; i<m; i++){
	ll u, v;
	cin>> u >> v;
	adjList[u].push_back(v);
	adjList[v].push_back(u);
	vec.push_back({u,v});
}
bfs(1);
string str="";
for(auto i : vec){
	ll l1 = i.first;
	ll l2 = i.second;
	// check for odd cycles;
	if(level[l1]==level[l2]){
		cout << "NO";
		return 0;
	}
	if(level[l1]<level[l2] && level[l1]%2){
		str+='1';
	}
	else if(level[l1]<level[l2]){
		str+='0';
	}
	else if(level[l1]>level[l2] && level[l2]%2){
		str+='0';
	}

	else{
		str+='1';
	}

}
cout << "YES" << endl;
cout << str << endl;

return 0;
}

