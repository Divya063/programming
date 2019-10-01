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
string str = "((()))";

int dp[str.length()];
fill(dp, dp+str.length(), 1);
for(int i=1; i<str.length(); i++){
	if(i==')'){
		if(str[i-dp[i-1]]=='('){
			dp[i] = 1 + dp[i-1];
		}
	}
}
return 0;
}

