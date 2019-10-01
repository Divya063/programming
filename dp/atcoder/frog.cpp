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

ll n;
cin >> n;
ll dp[N];
ll arr[n];
for(int i=1;i<=n;i++){

	cin >> arr[i];
}
dp[2]= abs(arr[2]-arr[1]);
for(int i=3;i<=n;i++){

	dp[i]=min(dp[i-1]+abs( arr[i]- arr[i-1]), dp[i-2]+abs(arr[i]- arr[i-2]));
}
cout << dp[n] <<endl;

return 0;
}

