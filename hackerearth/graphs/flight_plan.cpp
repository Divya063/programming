#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int n, m, t, c;
cin >> n >> m >> t >> c;

vector<int> adjlist[1001]{};
for(int i=0;i<m;i++){
	int a, b;
	cin >> a >> b;
	adjlist[a].push_back(b);
	adjlist[b].push_back(a);
}
for(int i{1}; i <= n; ++i){
        sort(adjlist[i].begin(), adjlist[i].end());
    }
int x, y;
cin >> x >> y;
map<int, int> parent;
queue<int> q;
map<int, bool> visited;

int i = x;
visited[i]=true;
q.push(i);
parent[i]=-1;
while(!q.empty()){
	auto t = q.front();
	q.pop();
	for(auto node : adjlist[t]){
		if(visited[node]==false){
			visited[node]=true;
			q.push(node);
			parent[node]=t;
		}
	}
}
int currentv= y;
vector<int> vec;
while(parent[currentv]!=-1){
	vec.push_back(currentv);
	currentv = parent[currentv];
}
vec.push_back(x);
cout << vec.size() << endl;
reverse(vec.begin(), vec.end());
for( auto i : vec){
	cout << i << " ";
}
return 0;
}

