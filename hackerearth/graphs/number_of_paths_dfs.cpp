#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<int, list<int>> adjList;
map<int, bool> visited;
int count1 =0;
map<int, int> dist;

void dfs(int src, int dest){
	visited[src]=true;
	dist[src] = 0;
	for(auto i : adjList[src]){
		if(!visited[i]){
			dfs(i, dest);
			if(i==dest){
				if(dist[i]>dist[src]+1){
					dist[i]=dist[src]+1;
					count1++;
				}

				else if(dist[i]==dist[src]+1)
					count1++;
	}
		}
		else
			if(i==dest){
				if(dist[i]>dist[src]+1){
					dist[i]=dist[src]+1;
					count1++;
				}

				else if(dist[i]==dist[src]+1)
					count1++;
	}
}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int n, m;
cin >> n >> m;
for(int i=0;i<m;i++){

	int a, b;
	cin >> a >> b;
	adjList[a].push_back(b);
	adjList[b].push_back(a);

}

dfs(1,5);
cout << count1;

return 0;
}

