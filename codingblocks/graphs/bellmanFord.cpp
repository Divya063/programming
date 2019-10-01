#include<bits/stdc++.h>

using namespace std;

class Graph{

	unordered_map<int, list<pair<int, int>>>adjList;

public:
	Graph(){

	}
	void addEdge(int u, int v, int w){

		adjList[u].push_back(make_pair(v, w));
	}

	void bellmanford(int src, int vertices){
		unordered_map<int, int> dist;
		for(auto i : adjList){
			dist[i.first]=INT_MAX;
		}
		dist[src]=0;

		for(int i=0;i<vertices-1;i++){

			for(auto node:adjList){
				auto n=node.first;
				for(auto destination:adjList[n]){
					if(dist[n]!=INT_MAX && destination.second+dist[n]<dist[destination.first]){

						dist[destination.first]= destination.second+dist[n];

					}
				}
			}
		}

		for(auto node:adjList){
				auto n = node.first;
				for(auto destination:adjList[n]){
					if(dist[n]!=INT_MAX && destination.second+dist[n]<dist[destination.first]){

						cout << "Negative Cycle found";
						return ;
					}
				}
			}

	  for(auto d:dist){
            
            cout<<d.first<<" is located at distance of  "<<d.second<<endl;
        }

	}
};


int main(){
	
	Graph g;
	g.addEdge(1,2,3);
    g.addEdge(4,1,2);
    g.addEdge(2,3,2);
    g.addEdge(3,4,1);
    g.addEdge(4,2,3);
    g.bellmanford(1, 4);

}