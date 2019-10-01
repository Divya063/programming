#include<bits/stdc++.h>

using namespace std;

#define ll long long

string alphabets = "abcdefghijklmnopqrstuvwxyz";

class Graph{

	map<int, list<int>> adjList;
	map<int, bool> visited;
	map<int, bool> onStack;
	list<char> ordering;
	bool hasCycle = false;


public:
	Graph(){

	}
	void addEdge(int u, int v){
		adjList[u].push_back(v);
	}

	

	void dfs(int src){
		if(hasCycle){
			return;
		}
		onStack[src]=true;
		visited[src]=true;
		for(auto n : adjList[src]){
			if(!visited[n])
				dfs(n);
			else if (onStack[n]) {
                hasCycle = true;            
				return;
			}

		}
		onStack[src]=false;
		ordering.push_front(alphabets[src]);
	}



	void dfsHelper(){
		for(int i=0;i<26;i++){
			if(!visited[i])
			dfs(i);
		}
		if(!hasCycle){
		for(auto i: ordering){
			cout <<i;
		}
	}
	else{
		cout << "Impossible";
	}
}


}; 




int main(){
	
	ll n;
	map<char, int> m;
	cin >> n;
	string a, b;
	cin >> a;
	Graph g;
	for(int i=0; i<alphabets.length();i++){
		m[alphabets[i]]=i;
	}
	for(int i=0;i<n-1;i++){
		cin >> b;
		for(int j=0; j<a.length() && j<b.length();j++){
			if(a[j]!=b[j]){
				//cout << a[j] << " precedes " << b[j] << endl;
				g.addEdge(m[a[j]], m[b[j]]);
				break;
			}

			if(j==b.size()-1 && a.size()>b.size()){
				cout << "Impossible";
				return 0;
			}
		}
		swap(a,b);
	}
	g.dfsHelper();
}