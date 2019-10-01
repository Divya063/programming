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
ll a, b, c;
cin >> a >> b >> c;
ll arr[a], arr1[b];
for(int i =0;i<a;i++)
cin >> arr[i];

for(int i=0;i<b;i++){
	cin >> arr1[i];
}

ll dp[a+1][b+1];
for(int i=0;i<=a;i++)
	dp[i][0]=0;
for(int i=0;i<=b;i++)
	dp[0][i]=0;

for(ll i=1;i<=a;i++){
	for(ll j=1;j<=b;j++){

		if(arr[i-1]==arr1[j-1]){
			dp[i][j]=1+dp[i-1][j-1];

	}

		else
			dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
}
cout <<  dp[a][b];

return 0;
}

