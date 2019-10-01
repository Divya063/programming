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
ll t;
cin >> t;
while(t--){
	ll n;
	cin >> n;
	ll arr[n], arr1[n];
	for(int i =0; i<n; i++){
		cin >> arr[i];
	}
	for(int i =0; i<n; i++){
		cin >> arr1[i];
	}
	ll ans = 0;
	for(int i =0; i<n; i++){
		ll max_sum = (arr[i]*20)-(arr1[i]*10);
		ans = max(ans, max_sum);
	}

	cout << ans << endl;

}
return 0;
}

