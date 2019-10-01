#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll arr[4*N], tree[4*N], ll ans;


void build(ll node, ll start, ll end){
	if(start == end){
		tree[node] = arr[start];
	}
	else{
		ll mid = (start + end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = max( tree[node], tree[2*node] + tree[2*node+1]);
	}
}
ll query(ll node, ll start, ll end, ll l , ll r){

	if(l>r){
		return 0;
	}
	if(start>r || start > end || end<r){
		return 0;
	}

	if(l<=start && r>=end){
		return tree[node];
	}

	ll mid = (start+end)/2;
	ll u = query(2*node, start, mid, l, r);
	ll v = query(2*node+1, mid+1, end, l, r);
	return max(u, v);


}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n; 
for(int i =0; i<n; i++){
	cin >> arr[i];
}
memset(tree, INT_MIN, N);
build(1, 0, n-1);
ll q;
cin >> q;
for(int i =0; i<q; i++){
	ll a, b;
	cin >> a >> b;
	ll ans = query(1, 0, n-1, a-1, b-1);
	cout << ans << endl;
}
return 0;
}

