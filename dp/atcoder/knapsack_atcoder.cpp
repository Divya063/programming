#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll dp[1000][100000];

ll knapsack(ll weight[], ll val[], ll n, ll w ){

	if(n==0||w==0){

		return 0;
	}

	if(weight[n-1]>w)
		return knapsack(weight, val, n-1, w);

	if(dp[n][w]!=-1)
		return dp[n][w];
	// minimum weight to get a value as weight is very large
	dp[n][w] = min(weight[n-1]+knapsack(weight, val, n-1, w), knapsack(weight, val, n-1, w));
	return dp[n][w];


}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
memset(dp, -1, sizeof(dp));

ll n, w;
cin >> n >> w;

ll weight[n], val[n];

for(ll i=0; i<n; i++){
	ll a, b;
	cin >> a >> b;
	weight[i]=a;
	val[i]=b;
}

cout << knapsack(weight, val, n, w );


return 0;
}

