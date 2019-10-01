#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int n, m;
char out[1002][1002];
long long dp[1002][1002];

int recurs(char out1[][1002], int i, int j){
	if(i==n-1 && j==m-1)
		return 1;
	if(i>=n || j>=m)
		return 0;
	if(out1[i][j] == '#')
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	dp[i][j] = (recurs(out1, i+1, j)+recurs(out1, i, j+1))%MOD;
	return dp[i][j];
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
memset(dp, -1, sizeof(dp));
cin >> n >> m;
for(int i=0;i<n;i++){
	for(int j=0;j<m; j++){
		cin >> out[i][j];
	}
}
cout << recurs(out, 0, 0);
return 0;
}

