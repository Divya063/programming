#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

vector<ll> bittree;
void update(ll x, ll val, ll n){
	while(x <=n){
		bittree[x]+=val;
		x += x & (-x);
	}
}

ll query1(ll i){
	ll sum =0;

	while(i>0){
		sum += bittree[i];
		i-= (i & (-i));
	}

	return sum;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, m, c;
cin >> n >> m >> c;
bittree.assign(n+1, 0);
for(int i = 0; i<m; i++){
	char s;
	cin >> s;
	if(s=='S'){
		ll u, v, val;
		cin >> u >> v >> val;
		update(u, val, n);
		update(v+1, -val, n);
	}

	else if(s == 'Q'){
		ll p;
		cin >> p;
		ll ans = query1(p)+c;
		cout << ans << endl;
	}

}

return 0;
}

