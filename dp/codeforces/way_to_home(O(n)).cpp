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

ll n, k;
cin >> n >> k;
string arr;
cin >> arr;

ll dp[n];
queue<ll> q;
for(int i=0;i<n;i++){
	dp[i]= MOD;
	if(arr[i]=='1'){
		q.push(i);
	}
}

dp[0]=0;


for(int i=1;i<n;i++){
	if(arr[i]=='1'){
	while(q.front()<i-k){
		q.pop();
	}
	dp[i]=dp[q.front()]+1;

}
}

if(dp[n-1]>=MOD+1)
	cout << "-1";
else
	cout << dp[n-1];
return 0;

}

