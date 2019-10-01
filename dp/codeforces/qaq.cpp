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
string t="QAQ";
string str;
cin >> str;
int dp[4]={0};
dp[0]=1;

for(int c=0;c<str.length();c++){
	for(int x =2;x>=0;x--){
		if(str[c]==t[x])
			dp[x+1]= dp[x+1]+dp[x];
	}
}

cout << dp[3];

return 0;
}

