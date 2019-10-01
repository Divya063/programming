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
while(n--){
	ll n,m , k, l,r;
	cin >> n >> m >> k >> l >> r;
    ll ans = INT_MAX;
	for(int i =0; i<n; i++){
		ll c, p;
		cin >> c >> p;
		if(c<k-1){
			c+=(m*1);
		}
		else if(c>k-1){
			c-=(m*1);
		}
		else{
			c=k;
		}

		if(c>=l && c<=r){
			ans = min(ans, p);
		}

	

	}

	if(ans == INT_MAX){
		cout << -1 << endl;
	}
	else{
		cout << ans << endl;
	}
}
return 0;
}

