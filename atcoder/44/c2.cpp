#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll ans=0, n,a ;
ll arr[N];

ll solve(ll index, ll sum){
	if(index>=n){
		return (sum==0);
		}
	//do not include the current element
	ans=solve(index+1, sum+arr[index]-a)+solve(index+1, sum);// include the current element
	return ans;
	
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n , a;
cin >> n >> a;
for(int i=1; i<=n; i++){
	cin >> arr[i];
}
ll ans1= solve(0, 0);
cout << ans1;


return 0;
}

