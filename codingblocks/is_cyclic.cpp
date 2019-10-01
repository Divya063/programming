#include<bits/stdc++.h>

using namespace std;

class Graph{

	map<int, list<int>> adjList;

public:

	Graph(){

	}

	void addEdge(int u, int v){
		adjList[u].push_back(v);
		adjList[v].push_back(u);		
	}

	bool bfs(int src){
		queue<int>q;
		map<int, bool>visited;
		map<int, int>parent;
		q.push(src);
		parent[src]=src;
		visited[src]=true;
		while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto neighbour:adjList[node]){
			if(visited[neighbour]==true && parent[node]!=neighbour){
				return true;
			}
			else if(!visited[neighbour]){
				q.push(neighbour);
				visited[neighbour]=true;
				parent[neighbour]=node;
			}
		}


	}
	return false;		
}
};


int main(){
	Graph g;
	g.addEdge(1,2);
	g.addEdge(1,4);
	g.addEdge(4,3);
	g.addEdge(2,3);
	if(g.bfs(1)){
		cout << "cyclic";
	}
	else{
		cout << "not cyclic";
	}
}