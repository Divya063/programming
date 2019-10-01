#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll dp[N];


int tribo(int n){
	if(n<3)
		return 0;
	if(n==3)
		return dp[n];
	if(dp[n] != -1)
		return dp[n];

	dp[n] = tribo(n-1)+tribo(n-2)+ tribo(n-3);

	return dp[n];
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll n;
cin >> n;
memset(dp, -1, sizeof(dp));
dp[3] = 2;
dp[4] = 4;
dp[5] = 7;

cout << tribo(n);


return 0;
}

