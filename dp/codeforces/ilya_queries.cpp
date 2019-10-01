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

string s;
cin >> s;
ll n;
cin >> n;
ll dp[s.length()];
dp[0]=1;
for(int i=1;i<s.length();i++)

{
	if(s[i]==s[i-1])
	dp[i]= 1+dp[i-1];

	else
	dp[i]= dp[i-1];

}
/*for(int i=0;i<n;i++){
	cout << dp[i] << " ";
}*/
for(int i=0;i<n;i++){
	ll l, r;
	cin >> l >> r;
	cout << dp[r-1]-dp[l-1]<< endl;

}

return 0;
}

