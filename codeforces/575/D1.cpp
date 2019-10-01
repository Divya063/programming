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
ll dp[N];
while(t--){
	ll n , k;
	cin >> n >> k;
	string s; 
	cin >> s;
	string a = "RGB";
	ll ans = INT_MAX;
	for(int j =0; j<3; j++){
	for( int i = 1; i <=s.length(); i++){
		dp[i] = dp[i-1] + (s[i-1]!=a[(j+i-1)%3]);
		if(i>=k){
			ans = min(ans, dp[i]-dp[i-k]);
		}
	}
}

cout << ans << endl;

}
return 0;
}

