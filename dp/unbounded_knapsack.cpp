#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll c[N], wt[N];
ll dp[10005];
ll n, k;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n >> k;
for(int i =1; i<=n; i++){
	cin >> wt[i] >> c[i];
}
dp[0]=0;
dp[1] = 0;
for(int i =1; i<=k; i++){
	for(int j =0; j<n; j++){
		if(wt[j]<=i){
			dp[i] = max(dp[i], dp[i-wt[j]]+c[j]);
		}
	}
}
cout << dp[k];
return 0;
}

