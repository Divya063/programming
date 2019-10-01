#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int n, ans = 0;
set<vector<int>> st;

// to check if array is sorted
bool check(vector<int> &x){
	for(int i =1;i<n;i++){
		if(x[i]<x[i-1])
			return 0;
	}
	return 1;
}

void bfs(vector<int> cur){
	queue< pair<vector<int>, int>> q;
	q.push({cur, 0});
	while(!q.empty()){
		auto f = q.front(); q.pop();
		if(check(f.first)){
			ans = f.second;
			return ;
		}

		for(int i=2;i<=n;i++){
			vector<int> go(f.first);
			reverse(go.begin(), go.begin()+i);
			if(st.find(go) == st.end()){
				st.insert(go);
				q.push({go, f.second+1});
			}
		}
	}
}




int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n;
vector<int> check;
for(int i=0, a;i<n;i++){
		cin >> a;
		check.push_back(a);
}

bfs(check);
cout << ans;


return 0;
}

