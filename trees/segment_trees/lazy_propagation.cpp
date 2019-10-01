#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll seg[4*N], arr[4*N], lazy[N];

void build(ll arr[], ll v, ll tl, ll tr){
	if(tl==tr){
		seg[v] = arr[tl];
	}
	else{
		ll mid = (tl+tr)/2;
		build(arr, 2*v, tl, mid);
		build(arr, 2*v+1, mid+1, tr);
		seg[v] = seg[2*v]+seg[2*v+1];
	}
}

void update(ll node, ll start, ll end, ll l , ll r, ll val){

	// checks if there is any pending node waiting to be updated
	if(lazy[node]!=0){
			seg[node] += (end-start+1)*lazy[node];

			if(start!=end){

			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];

		}
		lazy[node] = 0;
		}

	if(l>r)
		return;

	if(start>end || start>r || end<l)
		return;
	if(l<=start && end<=r){

		seg[node] += (end-start+1)*val;
		//mark the nodes as lazy

		if(start != end){
			lazy[2*node] +=val;
			lazy[2*node+1]+=val;
		}

		return;
	}

	ll mid = (start+end)/2;
	update(2*node, start, mid, l, r, val);
	update(2*node+1, mid+1, end, l, r, val);
	seg[node] = seg[2*node]+ seg[2*node+1];

}

ll query(ll node, ll start, ll end, ll l , ll r){

	if(lazy[node]!=0){

		seg[node] += (end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}

		lazy[node] = 0;
	}

	if(l>r)
		return 0;
	if(start>end || start>r || end<l){
		return 0;

	}

	if(l<=start && end<=r){
		return seg[node];
	}

	ll mid = (start+end)/2;
	ll u = query(node, start, mid, l, r);
	ll v = query(node, mid+1, end, l, r);
	return u+v;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

return 0;
}

