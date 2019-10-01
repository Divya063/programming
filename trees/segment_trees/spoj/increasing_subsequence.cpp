#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll dp[N][12];
ll arr[N];
ll n, k;


/*
void cumulative_sum(ll index, ll k, ll val){

	for(int i = index; i<=n; i++){
		dp[i][k]+=val;
	}
}
*/

void update(ll index, ll j, ll val){

	while(index<=n){

		dp[index][j] += val;
		index+=(index & (-index)); 
	}
}

ll sum(ll idx, ll k){
	if(k==0) return 1;
        ll sum{0};
        while(idx>=1)
        {
            sum += dp[idx][k];
            idx -= idx & -idx;
        }
    return sum;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n >> k;
k++;
ll cur_sum;
for(ll i =1; i<=n; i++){
	ll value;
	cin >> value;
	for(ll j =1; j<=k; j++){
		cur_sum = dp[value-1][j-1];
		update(value, j, cur_sum);
	}
}

cout << sum(n, k) << endl;

return 0;
}

