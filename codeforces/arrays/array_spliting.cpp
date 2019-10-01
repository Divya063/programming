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
ll n , k;
cin >> n >> k;
ll arr[n];
for (int i=0; i<n ; i++){

	cin >> arr[i];
}

vector<ll> ans;
for(int i=1; i<n; i++){
	ans.push_back(arr[i-1]-arr[i]);
}

sort(ans.begin(), ans.end());
ll res = arr[n-1]-arr[0];

for(int i =0; i<k-1; i++){
	res+=ans[i];
}

cout << res << endl;
return 0;
}

