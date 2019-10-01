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

int arr[10];
for(int i=0;i<8;i++){
	cin >> arr[i];
}
int best =-1;

int dp[100]={1};
for(int i = 1;i<8;i++){

	for(int j=0 ;j<i;j++){

		if(arr[j]<=arr[i]){
			int current = 1+dp[j];

			dp[i]= max(current, dp[i]);
		}
	}
	
	best=max(best, dp[i]);
}

cout << best << endl;

return 0;
}

