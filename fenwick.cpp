#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll bit[10000]={0};

void update(ll num, ll i, ll n){ 

	while(i<=n){
		bit[i]+=num;
		i=i+(i & -i);
	}
}

ll query(ll i){
	ll sum=0;
	while(i>0){
		sum+=bit[i];
		i-=(i& -i);
	}
	return sum;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
ll arr[n+1];
for(int i=1; i<=n ;i++){
	cin >> arr[i];
}
for(int i=1; i<=n; i++){
	update(arr[i], i, n);
}
cout << query(4);
return 0;
}

