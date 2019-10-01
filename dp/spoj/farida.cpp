#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll dp[N];
ll profit(ll arr[], ll i){
	if(i<0)
		return 0;
	if(dp[i])
		return dp[i];

	dp[i]= max(profit(arr, i-2)+ arr[i], profit(arr, i-1));
		return dp[i];
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);


int t;
cin >> t;
int t1=0;
while(t--){
ll n;
cin >> n;
for(int i=0;i<n+1;i++){
	dp[i]=0;
}
ll arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}
t1++;
cout << "Case " << t1 << ": "<< profit(arr, n-1)<< endl;

}
return 0;
}

