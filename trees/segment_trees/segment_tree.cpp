#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
pair<ll, ll> pair[4*N];
ll seg[4*N];

void build(ll arr[], ll index, ll tl, ll tr){
	if(tl==tr){
		seg[index] = arr[tl];
	}
	else{
		ll mid = (tl + tr)/2;
		build(arr, 2*index, tl, mid);
		build(arr, 2*index+1, mid+1, tr);
		seg[index] = seg[2*index] + seg[2*index+1];
	}
}

int query(ll node, ll start, ll end, ll l, ll r ){

	if(r<start || l>end){
		return 0;
	}

	// inside range l and r
	if(l<=start && end<=r){

		return seg[node];

	}

	else{
		ll mid = (start+end)/2;
		ll u = query(node, start, mid, l, r);
		ll v = query(node, mid+1, end, l, r);
		return u+v;
	}
}

void update(ll node, ll start, ll end, ll index, ll value){

	if(start==end){
		seg[node] = value;

	}
	else{
		ll mid = (start+end)/2;
		if(index<=mid){
			update(2*node, start, mid, index, value);
		}
		else{
			update(2*node +1, mid+1, end, index, value);
		}

		seg[node] = seg[node*2]+ seg[node*2+1];
	}




}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);


return 0;
}

