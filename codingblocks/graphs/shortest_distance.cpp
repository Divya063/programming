#include<bits/stdc++.h>

using namespace std;

template<typename T>


class Graph{

	map<T, list<int>> adjList;

public:
	Graph(){

	}

	void addEdge(T u, T v, bool dir=true){

		adjList[u].push_back(v);
		if(dir){
			adjList[v].push_back(u);
		}
	}

	void print(){

		for(auto i:adjList){

			cout << i.first << " ";

			for(auto neighbour:i.second){
				cout << neighbour;
			}
			cout <<endl;
		}
	}

	int bfs(int src){

		map<int, int> dist;
		for(auto j :adjList){

			dist[j.first]=INT_MAX;

		}
		map<T, T> parent;
		queue<int> q;
		q.push(src);

		dist[src]=0;
		parent[src]=src;
		int depth=0;
		while(!q.empty()){
			depth=depth+1;
			int size=q.size();
			// to find maximum depth
			for(int i=0;i<size;i++){
			T node=q.front();
			cout << node << " ";
			q.pop();
			for(int neighbour : adjList[node]){
				if(dist[neighbour]==INT_MAX){
					q.push(neighbour);
					dist[neighbour]=dist[node]+1;
					parent[neighbour]=node;
				}
			}

		}
	}		

		for(auto i: adjList){

			T node=i.first;
			cout << "Distance of " << node << "from "<< src << dist[node] <<endl; 
		}
		return depth;

	}


};


int main(){
	
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(3,4);
	cout << "depth is" << g.bfs(0);



}