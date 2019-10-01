#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll visited[1000];
ll dist[1000];
map<int, list<int>> adjList;
int count1=0;

void bfs(int src, int ans){
	queue<int> q;
	q.push(src);
	visited[src]=1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto n : adjList[node]){
			if(!visited[n]){
				visited[n]=1;
				q.push(n);
				dist[n]=dist[node]+1;
				if(dist[n]== ans)
					count1++;
			}
		}
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll u, v;
cin>> u >> v;
for(int i=0; i<v; i++){
	ll a, b;
	cin >> a >> b;
	adjList[a].push_back(b);
	adjList[b].push_back(a);

}

int n;
cin >> n;
while(n--){
memset(dist, 0, sizeof(dist));
memset(visited, 0, sizeof(visited));
int a, b;
cin >> a >> b;
count1=0;
bfs(a, b);

cout << count1 << endl;;

}
return 0;
}

