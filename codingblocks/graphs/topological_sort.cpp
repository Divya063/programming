#include<bits/stdc++.h>

using namespace std;

template<typename T>

class Graph{
	map<T, list<T>> adjList;
	map<T, bool>visited;
	list<T> ordering;

	Graph(){

	}

	void addEdge(T u, T v, bool dist=true){

		adjList[u].push_back(v);
		if(dist){
		adjList[v].push_back(u);
	}

	}

	void dfs(t src){
		visited[src]=true;
		for(auto str:adjList[src]){
			if(!visited[str]){
				visited[str]=true;
				dfs(str);
			}
		}

		ordering.push_front(src);
	}

	void topological_sort(){
		for(auto skills:adjList){
			T i=skills.first;
			for(auto final:adjList[i]){
				if(!visited[final]){
					dfs[final];

			}
				}
		}
		for(auto k:ordering){
			cout << k << "-->";		
		}
	}

};


int main(){
	Graph<string> g;
	g.addEdge("English", "Progarmming", false);
	g.addEdge("Maths", "Progarmming LOgic", false);
	


}