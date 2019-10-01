#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll cost, m;
const int MAX = 2e5+2;
ll dp[MAX];

int mini(ll *arr, int n){

	if(n==0 || n<0){
		return 0;
	}

	if(dp[n]!=-1){
		return dp[n];
	}
	for(int i=1; i<=m; i++){
		dp[n] = min(arr[n]/(1<<i) + mini(arr, n-1), arr[n] + mini(arr, n-1));
		cout << dp[n];
	}

	return dp[n];

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m;
cin >> n >> m;
ll arr[n];
for(int i=0; i<n; i++){
	cin >> arr[i];
}

memset(dp, -1, sizeof(dp));

cout << mini(arr, n-1);



return 0;
}

