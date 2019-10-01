#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll visited[N];
ll ans[N];

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
ll arr[n+1][n+1];
for(int i =1; i<=n; i++){
	for(int j =1; j<=n; j++){
		cin >> arr[i][j];
	}
}

ll edges[n+1];
for(int i =1; i<=n; i++){
	cin >> edges[i];
}

/*
reverse , e.g - 1, 2, 3 - start from 3
only third edge will get included not 1 and 2
*/
for(int idx = n; idx>=1; idx--){
	ll k = edges[idx];
	visited[k] = 1;
	for(int i =1; i<=n; i++){
		for(int j =1; j<=n; j++){
			arr[i][j] = min(arr[i][j], arr[i][k]+ arr[k][j]);
			if(visited[i] && visited[j]){ //includes the target edge
				//cout << arr[i][j] << " ";
				ans[idx]+=arr[i][j];
			}

		}
	}

}

for(int i =1; i<=n; i++){
	cout << ans[i] << " ";
}
return 0;
}

