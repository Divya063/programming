#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll ans;
ll dp[N];

ll count_stars(ll n){
	if(n<0|| n==0){
		return 1;
	}
	if(dp[n]!= -1)
		return dp[n];

	dp[n] =  count_stars(n-1) + count_stars(n-2);
	return dp[n];
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
memset(dp, -1, sizeof(dp));
ll n;
cin >> n;
cout << count_stars(n);
return 0;
}

