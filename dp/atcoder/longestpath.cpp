#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<int, list<int>> adjList;


int dp[N];

int dfs(int k){

	int &ans = dp[k];

	if(dp[k]!=-1)
		return ans;
	ans=0;
	//cout << k << " ";
	for(auto i: adjList[k]){
		ans = max(ans, 1+dfs(i));
	}
	return ans;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

memset(dp, -1, sizeof(dp));
int n, m;
cin >> n >> m;
for(int i=0; i<m;i++){
	int a, b;
	cin >> a >> b;
	adjList[a].push_back(b);
}

int answer =0;

for(int i=1;i<=n;i++){
	answer = max(answer, dfs(i));
}
cout << answer;



return 0;
}

