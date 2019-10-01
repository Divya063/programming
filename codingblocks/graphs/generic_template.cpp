#include<bits/stdc++.h>

using namespace std;

template<typename T> 

class Graph{

	map<T, list<T>>adjList;

public:
	Graph(){


	}
	void addEdge(T u, T v, bool direc=true){

		adjList[u].push_back(v);
		if(direc){
		adjList[v].push_back(u);
	}

	}
	void print(){

		for(auto key:adjList){

			cout << key.first;
			for(auto i: key.second){
				cout << i;
			}
		}
	}

	void bfs(T src){

		

		queue<T> q;
		map<T, bool> visited;
		q.push(src);
		visited[src]=true;

		while(!q.empty()){

			T node = q.front();
			cout << node << " ";
			q.pop();

			for(auto neighbour:adjList[node]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour]=true;
					
				}
			}

		}

	}


};


int main(){
	
Graph<int> g;
g.addEdge(0,1);
g.addEdge(0,4);
g.addEdge(4,3);
g.addEdge(1,4);
g.addEdge(1,2);
g.addEdge(2,3);
g.bfs(0);
//g.print();


}