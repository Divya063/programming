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
int arr[n];

for(int i=0;i<n;i++)
{

	cin >> arr[i];
}

if(n==1){
	cout << 1;
	return 0;
}


vector<int> dp(n+1, 1);

int best = -1;

for(int i=1;i<n;i++){
	if(arr[i-1]<=arr[i]){

		dp[i]=dp[i]+dp[i-1];
	}
	best=max(best, dp[i]) ;
}
cout << best;

return 0;
}

