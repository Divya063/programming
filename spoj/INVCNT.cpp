#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

void update(ll bit[], ll i, int n){
	while(i<=n){
		bit[i]+=1;
		i+=(i&-i);
	}
}

ll query(ll bit[], ll i){
	ll sum=0;
	while(i>0){
		sum+=bit[i];
		i-=(i&-i);
	}

	return sum;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll t;
	scanf("%lld",&t);
	while(t--){
    
    ll n;
	scanf("%lld",&n);
	ll bit[n+1] = {0};
	ll arr[n+1];
	ll arr1[n+1];
	arr[0]=arr1[0]=0;
    for(ll i=1;i<=n;i++){

    	scanf("%lld",&arr[i]);
    	arr1[i] = arr[i];

    }
	ll ans=0;
	sort(arr1, arr1+n+1);
	for(int i=1; i<=n; i++){
		//coordinate compression
		ll rank = int(lower_bound(arr1, arr1+n+1, arr[i])-arr1);
		//cout << rank << endl;
		arr[i]=rank;
	}
	for(int i=n; i>=1; i--){
		ans+=query(bit,arr[i]-1);
		update(bit, arr[i], n);
	}
	cout << ans << endl;
}
return 0;
}

