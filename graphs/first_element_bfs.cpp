#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
map<ll, list<ll>> adjList;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
for(int i=0; i<m; i++){
	ll u, v;
	cin >> u >> v;
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}

queue<int> q;
q.push(1);
vector<int> vec;
vec.push_back(1);
vector<bool> visited(n+1, false);
int count =0;
vector<int> level(n+1, 0);
level[1]=0;
visited[1] = true;
while(!q.empty()){
	auto front = q.front();
	count =0;
	q.pop();
	for(auto i : adjList[front]){
		if(!visited[i]){
			if(count==0){
				vec.push_back(i);
				//cout << i << endl;
				count=1;
			}
			if(adjList.)
			level[i] = level[front]+1;
			visited[i] = true;
			q.push(i);
		}
	}
}

for(auto i : vec){
	cout << i << " ";
}
cout << level[n] << endl;
return 0;
}

