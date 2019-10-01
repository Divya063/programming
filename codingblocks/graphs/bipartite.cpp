#include<bits/stdc++.h>

using namespace std;
#define int long long

void bfs(int src){
	q.push(src);
	color[src]=0;
	bool ans = true;
	while(!q.empty() && ans){
		int front=q.front();
		q.pop();
		for(int neighbour:adjList[front]){

			if(color[neighbour]==-1){
				color[neighbour]=1-color[src];
				q.push(neighbour);
			}
			else if(color[neighbour]==color[src]){
				ans=false;
				break;
			}
		}
	}
}


int32_t main(){

	int t;
	cin >> t;
	while(t--){
		int a, b;
		map<int, list<int>> adjList;
		queue<int> q;
		cin >> a >>b;
	for(int i=0;i<b;i++){
		int x, y;
		cin >> x >> y;
		adjList[x].push_back(y);
		adjList[y].push_back(x);
	}

	int color= new count[a]{-1};
	for(int i=1;i<=a;i++){
		if(vis[i]==0)
			bfs(i);
	}

	

	for(int i=0;i<a;i++){
		cout << color[i] << " ";
	}

	if(ans==false){
		cout << "NO";
	}
	else{
		int zero= count(color, color+a, 0);
		int one= count(color, color+a, 1);
		if(zero>one)
			cout << zero <<endl;
		else
			cout << one <<endl;

	}

}

}