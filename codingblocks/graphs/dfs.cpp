#include<bits/stdc++.h>

using namespace std;
int best =-1;
int dis =0;
template<typename T> 

class Graph{

	map<T, list<T>>adjList;
	map<T, bool> visited;

public:
	Graph(){


	}
	void addEdge(T u, T v, bool direc= false){

		adjList[u-1].push_back(v-1);
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

	void dfs(T src){
		visited[src]=true;
		//cout << src << " ";
		for(auto neighbour:adjList[src]){
				if(!visited[neighbour]){
					dfs(neighbour);
				}
		}

	}

	int helper(int n){
		int connected_components=0;

		for(int i =1;i<=n;i++){

			if(!visited[i]){
				dfs(i);
				connected_components++;
			}

	
			}
	}

	/*
	void connected_components(){
		int component=1;
		for(auto i: adjList){
			T k=i.first;
			for(auto city:adjList[k]){
				if(!visited[city]){
					dfs(city);
					component++;
				}
			}
		}
		cout << "Number of components" << component;
	}*/
};


int main(){
	
Graph<int> g;
int n, m;
cin >> n >> m;
for(int i=0;i<m;i++){

	int a, b;
	cin >> a >> b;
	g.addEdge(a, b);
}
g.helper(n);
cout << best;
//g.print();
return 0;
}