#include<bits/stdc++.h>

using namespace std;
#define ll long long

map<int, list<int>>adjList;
map<int, int> visited;
int component;

int dfs(int src){
	visited[src]= 1;
	component++;
	for(auto neighbour:adjList[src]){
		if(!visited[neighbour])
			dfs(neighbour);
	}

}

int dfsHelper(){
	component=1;
	dfs(0);
	return component;
}
void visit(int n){
	for(int i=0;i<n;i++){
		visited[i]=false;
	}

}


int main(){
	
	ll n , m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int a, b;
		cin >> a >>b;
		adjList[b-1].push_back(a-1);
	}
	visit(n);
	cout << dfsHelper();
	for(int i=0;i<n;i++){
		cout << visited[i]<< " ";
	}
	
}