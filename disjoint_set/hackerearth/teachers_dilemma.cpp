#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll arr[N]={0}, size[N];

void initialize(){
	for(int i =0; i<N; i++){
		arr[i] = i;
		size[i] = 1;
	}
}

int root(ll a){
	while(a!=arr[a]){
		arr[a] = arr[arr[a]];
		a = arr[a];
	}

	return a;
}

void union1(ll a, ll b){
	ll root_a = root(a);
	ll root_b = root(b);
	if(size[root_a] < size[root_b]){
		size[root_b]+=1;
		arr[a] = arr[b];
	}
	else{
		size[root_a]+=1;
		arr[b] = arr[a];
	}

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);;
ll n, m;
cin >> n >> m;
initialize();
for(int i =0; i<m; i++){
	ll a,b;
	cin >> a >> b;
	a= a-1;
	b = b-1;
	if(root(a)!= root(b)){
		union1(a,b);
	}
}

ll ans = 1;
ll mod = 1e9+7;

for(int i =0; i<n; i++){
	if(size[i]!=1)
	ans= (ans*size[i])%mod;
}

cout << ans%mod;



return 0;
}

