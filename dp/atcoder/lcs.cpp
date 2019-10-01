#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#include<cstring> 
#include<cstdlib> 



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
string s, t;
cin >> s >> t;
int n = s.length();
int m = t.length();
ll dp[n+1][m+1];
for(int i=0; i<=n; i++){

	dp[i][0]=0;
}
for(int j=0; j<=m; j++){
	dp[0][j]=0;
}

for(int i=1;i<=n;i++){
	for(int j=1; j<=m; j++){

		if(s[i-1]==t[j-1]){
			dp[i][j] = 1+dp[i-1][j-1];
		}
		else
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

	}
}

int index = dp[n][m];

char lcs[index+1];
lcs[index]='\0';

int i = n;
int j = m;
while(i>0 && j>0){

	if(s[i-1]==t[j-1]){
		lcs[index-1] = s[i-1];
		i--;
		j--;
		index--;
	}

	else if(dp[i-1][j]>dp[i][j-1]){
		i--;
	}
	else
		j--;
}

cout << lcs;
return 0;
}

