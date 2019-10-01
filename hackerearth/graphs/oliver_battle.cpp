#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll arr[1001][1001];
int visited[1001][1001];

ll bfs(ll x, ll y){
	visited[x][y] =1;
	ll nodes=1;
	queue<pair<ll, ll>> q;
	q.push({x, y});
	while(!q.empty()){
		x=q.front().first;
		y=q.front().second;
		q.pop();
		for(ll i=-1; i<=1; i++){
			for(ll j=-1; j<=1; j++){
				if(!visited[x+i][y+j] && arr[x+i][y+j]){
					nodes++;
					q.push({x+i, y+j});
					visited[x+i][y+j]=1;
				}
			}
		}
	}
	return nodes;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll n;
cin >> n;
while(n--){
	memset(visited, 0, sizeof(visited));
	memset(arr, 0, sizeof(arr));

	ll p, q;
	cin >> p >> q;
	for(ll i=1;i<=p; i++){
		for(ll j=1; j<=q; j++){
			cin >> arr[i][j];

		}
	}
	int connected_part=0;
	ll ans=0;

	for(ll i=1; i<=p; i++){
		for(ll j=1; j<=q; j++){
			if(!visited[i][j] && arr[i][j]){
				ans= max(ans, bfs(i,j));
				connected_part++;
			}
		}
	}

	cout <<connected_part << " " << ans <<endl;


}

return 0;
}

