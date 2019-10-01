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

int n , k;
cin >> n >> k;
int arr[n];

for(int i=0;i<n;i++){
	cin >> arr[i];
}

int dp[n+1];
for(int i=1;i<=n;i++){
	dp[i]= 1e9;
}
dp[0]= 0;

for(int i=1;i<n;i++){
	for(int j=1;j<=k;j++){
		if(i-j>=0)
		dp[i]=min(dp[i], dp[i-j]+abs(arr[i]-arr[i-j]));
	}
}
cout << dp[n-1] << endl;

return 0;
}

