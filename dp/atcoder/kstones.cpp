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

// defne the state of dp
// dp[i] is true if first wins.

int n , k;
cin >> n >> k;
int arr[n];
for(int i=0;i<n;i++){

	cin >> arr[i];
}

for(int i=1; i<=k; i++){
	for(int j=0; j<n;j++){
		if(i>=arr[j] && !dp[i-arr[j]]){
			dp[i]=true;
		}
	}




}
return 0;
}

