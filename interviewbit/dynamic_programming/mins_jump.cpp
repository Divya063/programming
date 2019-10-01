#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
int dp[N];
int ans =0;

int rec(vector<int> arr, int i, int n){

	if(i==n-1){
		return 1;
	}
	if(i==n||i>n){
		return 0;
	}
	if(dp[i]!=INT_MAX){
		return dp[i];
	}
	for(int k = 1; k<=arr[i]; k++){
		ans+=rec(arr, i+k, n);
		dp[i]=min(dp[i], ans);
		}
		return dp[i];

}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
vector<int> vec{2,3,1,1,4};

for(int i=0; i< 1000;i++){
	dp[i] = INT_MAX;
}
cout << rec(vec, 0, 4);

return 0;
}

