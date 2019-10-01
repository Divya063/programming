#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int n, k;
cin >> n >> k;
string s;
cin >> s;
ll dp[N];
for(int i =1;i<=n;i++){
	dp[i]=int(1e9);
}
dp[0]=0;

for(int i=1; i<n; i++){
	if(s[i]=='0')
		continue;
	for(int j = 1; j<=k; j++){
		if(i-j>=0)
		dp[i]= min(dp[i], 1+dp[i-j]);
	}
}
if(dp[n-1]==int(1e9))
	cout << -1;
else
	cout << dp[n-1];

return 0;
}

