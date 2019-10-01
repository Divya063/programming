#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int countP(int n, int k) {
if (k > n || n < 1 || k < 1) {
return 0;
}

vector<int> dp(k + 1, 0);

for (int i = 1; i <= n; i++) {
for (int j = min(k, i); j >= 2; j--) {
if (i == j)
{
dp[j] = 1;
continue;
}
dp[j] = j * dp[j] + dp[j - 1];
}
dp[1] = 1;
}

return dp[k];
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cout << countP(7, 2);

return 0;
}

