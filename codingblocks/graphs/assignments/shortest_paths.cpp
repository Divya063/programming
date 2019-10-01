#include<bits/stdc++.h>

using namespace std;

class Graph{

	map<int, list<int>> adjList;
	map<int, int> dist;
	map<int,bool>visited;

public:
	Graph(){

	}
	void addEdge(int u, int v){
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	void bfs(int src){

		queue<int> q;
		q.push(src);
		dist[src]=0;
		visited[src]=true;
		while(!q.empty()){
			int top=q.front();
			q.pop();
			for(auto n:adjList[top]){
				if(!visited[n]){
					visited[n]=true;
					dist[n]=dist[top]+6;
					q.push(n);
				}
			}
		}

	}

	void helper(int start, int vertices){
			bfs(start);
		for(int i = 1;i<=vertices; i++){
			if(!visited[i]){
				if(i!=start)
				{
					dist[i]=-1;
				}
		}
		}
		for(int i=1;i<=vertices;i++){
			if(i!=start)
			cout << dist[i] << " ";
		}
		
	}

};


int main(){
	
	int t;
	cin >> t;
	while(t--){
		Graph g;
		int n, m;
		cin >> n >> m;
		for(int i=0;i<m;i++){
			int a, b;
			cin >> a >> b;
			g.addEdge(a,b);
		}
		int start;
		cin >> start;
		g.helper(start, n);
	}
}