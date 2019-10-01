#include<bits/stdc++.h>

using namespace std;

class Graph{

	map<int, list<int>>adjList;
	map<int, bool> visited;
	int component;

public:
	Graph(){

	}
	void dfs(int src){
		visited[src]=true;
		component++;
		for(auto neighbour: adjList[src]){

			if(!visited[neighbour])
				dfs(neighbour);
		}


	}

	void addEdges(int u, int v){
		int component=1;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	int number(int n){
		int total_ways=(n*(n-1))/2;
		for(auto i:adjList){
			int node=i.first;
			for(auto n: adjList[node]){
				if(!visited[n]){
					component=0;
					dfs(n);
					total_ways-= (component*(component-1))/2;
				}
			}
		}
		return total_ways;
	}

};


int main(){
	int n, q;
	Graph g;
	cin >> n >> q;
	for(int i=0;i<q;i++){
		int x, y;
		cin >> x >>y;
		g.addEdges(x, y);
	}
	cout << g.number(n);


}