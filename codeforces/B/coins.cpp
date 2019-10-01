#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

template <typename T>

class Graph{
	map<T, list<T>>adjList;
	map<T, bool> visited;
	map<T, bool> onStack;
	list<T>ordering;
	bool hasCycle = false;
public:
	Graph(){

	}
	void addEdge(T a, T b){
		adjList[a].push_back(b);
	}

	void dfs(T src){
		if(hasCycle)
			return;
		visited[src]=true;
		for(auto coins:adjList[src]){
			if(!visited[coins]){
				visited[coins]=true;
				dfs(coins);
			}
			if(onStack[coins]){
				hasCycle =true;
				return;
			}
		}
		onStack[src]=false;
		//cout << src << endl;
		ordering.push_front(src);
	}

	void topological_sort(){
	for(auto i: adjList){
			char c = i.first;
			for(auto s:adjList[c]){
				if(!visited[s])
					dfs(s);
			}
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



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
Graph<char> g;
vector<string> arr;
for(int i=0;i<3;i++){
	string a;
	cin >> a;
	arr.push_back(a);
}
for(auto i : arr){
	cout << i << endl;
	if(i[1]=='>'){
		
		g.addEdge(i[0], i[2]);
	}
	else if(i[1]=='<'){
		g.addEdge(i[2], i[0]);
	}

}
g.topological_sort();


return 0;
}

