#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 1e9;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
ll arr[n];
for(ll i =0; i<n; i++){
	cin >> arr[i];
}

vector<ll> dp(n+1, INT_MAX);
dp[0] =0;
for(ll i =0; i<n; i++){
	for(ll j=1; i-j>=0; j=j*2){
		dp[i]= min(dp[i], dp[i-j]+abs(arr[i]-arr[i-j]));
	}
}
cout << dp[n-1];
return 0;
}

