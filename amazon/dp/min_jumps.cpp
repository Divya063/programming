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

ll n;
cin >> n;
while(n--){
	ll size;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	for(int i=0;i<size;i++){
		for(int j=1;j<=i+arr[i];j++){
			best= max(best, )
		}
		dp[i]= min(dp[i], 1+dp[i]);
	}
}
return 0;
}

