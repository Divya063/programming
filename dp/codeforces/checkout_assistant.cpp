#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const long long int mx=2e3;

ll dp[mx+5][mx+5];
ll n;
ll t[mx+5], c[mx+5];

ll knapsack(ll i, ll tym){
	if(tym>=n)
		return 0;
	if(i==n+1)
		return 1000000000000000L;
	
	if(dp[i][tym]){
		return dp[i][tym];
	}

	dp[i][tym] = min(knapsack(i+1, tym), c[i]+knapsack(i+1, tym+t[i]+1));
	return dp[i][tym];
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n;
for(int i =1; i<=n; i++){
	cin >> t[i] >> c[i];
}
cout << knapsack(1, 0);



return 0;
}

