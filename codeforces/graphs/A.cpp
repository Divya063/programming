#include<bits/stdc++.h>

using namespace std;

#define ll long long

map<int, list<int>> adjList;
map<int, bool> visited;

void dfs(ll src){
	visited[src]=true;
	for(auto i:adjList[src]){
		if(!visited[i])
			dfs(i);
	}
}


int main(){
	
	ll n, t;
	cin >> n >> t;

	for(int i=1;i<=n-1;i++){
		int x;
		cin >> x;
		adjList[i].push_back(x+i);
	}
	dfs(1);
	if(visited[t])
		cout << "YES";
	else
		cout << "NO";



}