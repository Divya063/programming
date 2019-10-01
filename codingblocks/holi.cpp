#include<bits/stdc++.h>

using namespace std;



class Graph{

	int V;
	list <pair<int, int>> *l;
	map<int, bool> visited;

public:

	Graph(int v){
		V=v;
		l=new list<pair<int, int>>[V];

	}

	void addEdge(int u, int v, int w){
		l[u-1].push_back(make_pair(v-1, w));
		l[v-1].push_back(make_pair(u-1, w));
	}

	int dfsHelper(int src, int *count, int &ans){
		visited[src]=true;
		count[src]=1;
		for(auto neighbour:l[src]){
			int pos=neighbour.first;
			if(!visited[pos]){
			count[src]+=dfsHelper(pos,count, ans);
			int s=count[pos];
			int edgeCost=neighbour.second;
			ans+=2*min(s, V-s)*edgeCost;
			//cout << ans;
		}
		}
		return count[src];

	}

	int dfs(){
		int ans=0;
		int *count=new int[V]{0};
		dfsHelper(0, count, ans);
		return ans;
		/*for(int i=0;i<V;i++){
			cout << count[i] << " ";
		}*/
	}


};




int main(){
	int t;
	cin >>t;
	int i=1;
	while(t--){
	int vertices;
	cin >> vertices;
	Graph g(vertices);
	int a, b, c;
	for(int i=0;i<vertices-1;i++)
	{
	cin >> a >> b >>c;
	g.addEdge(a,b,c);
	}
	cout << "Case "<<"#"<<i<<": "<<g.dfs()<<endl;
	i++;
}

}