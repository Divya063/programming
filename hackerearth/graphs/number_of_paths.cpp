#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<ll, list<ll>> adjList;
map<int, bool> visited;

int bfs(int src, int size){
	queue<int> q;
	int dist[1001];
	int paths[1001];
	memset(paths, 0, sizeof(paths));
	for(int i=0 ;i<= size ; i++){
		dist[i] = INT_MAX;
	}
	q.push(src);
	dist[src]=0;
	paths[src]=1;
	visited[src] = true;
	while(!q.empty()){
		int n =q.front();
		q.pop();
		for(auto i : adjList[n]){

			if(!visited[i]){
				visited[i] = true;
				q.push(i);
			}

			else{
			//cout << dist[i] << "yo";
			if(dist[i]>dist[n]+1){

				dist[i]=dist[n]+1;
				cout << "here" << paths[i] << endl;
				paths[i]=paths[n];

			}
			else if(dist[i]==dist[n]){

				paths[i]+=paths[n];

			}

			}

		}

	}

	for (int i = 0; i <=size; i++) 
        cout << paths[i] << " "; 
    return 0;



}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n , m;
cin >> n >> m;
for(int i=0;i<m;i++){
	ll u, v;
	cin >> u >> v;
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}

bfs(1, n);

return 0;
}
