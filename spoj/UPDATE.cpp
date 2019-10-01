#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll arr[N];

void update(ll i, ll n, ll val){
	i=i+1;
	while(i<=n){
		arr[i]+=val;
		i+=(i & -i);
	}
}

ll query(ll i){
	i=i+1;
	ll sum =0;
	while(i>0){
		sum+=arr[i];
		i-=(i & -i);
	}
	return sum;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ios_base& scientific (ios_base& str);

ll n;
cin >> n;
while(n--){
	ll size, num_updates;
	cin >> size >> num_updates;
	arr[size]={0};
	for(int i=0; i<num_updates; i++){
		ll l, r, val;
		cin >> l >> r >> val;
		update(l, size, val);
		update(r+1, size, -val);
	}
	ll num_queries;
	cin >> num_queries;
	while(num_queries--){
		ll query1;
		cin>> query1;
		cout << query(query1) << endl;
	}
}
return 0;
}

