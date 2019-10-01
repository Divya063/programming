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
ll a, b, c;
cin >> a >> b >> c;
ll ans = (c-(a-b));
if(ans<0)
	cout << 0;
else cout << ans;
return 0;
}

