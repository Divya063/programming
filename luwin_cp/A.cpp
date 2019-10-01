#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll knapsack(ll k, ll w[], ll v[], ll n){

	if(n==0 || k==0){
		return 0;
	}
	if(w[n-1]>k){
		return knapsack(k, w, v, n-1);
	}
	else 
		return max((v[n-1]+ knapsack(k-w[n-1], w, v, n-1)), knapsack(k, w, v, n-1));
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n, k;
cin >> n >> k;
ll w[n], v[n];
for(int i=0; i<n ; i++){
	cin >> w[i] >> v[i];
}

cout << knapsack(k, w, v, n);


return 0;
}

