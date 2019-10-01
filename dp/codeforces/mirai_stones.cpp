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
ll dp[n+1]={0};
int arr[n];
cin >> arr[0];
dp[0]=arr[0];

for(int i=1;i<n;i++){
	cin >> arr[i];
	dp[i]= arr[i]+ dp[i-1];
	//cout << dp[i] << endl;
}

sort(arr, arr+n);
ll dp1[n+1]={0};
dp1[0]=arr[0];

for(int i=1;i<n;i++){
	dp1[i]= arr[i]+dp1[i-1];
	//cout << dp1[i] << endl

}


int m, num;
cin >> m;
int choice, l, r;

for(int i=0;i<m;i++){
	cin >> choice >> l >> r;
	if(choice==1){
		if(l==1)
			cout << dp[r-1] << endl;
		else
		cout << dp[r-1]-dp[l-2] << endl;
	}
	else{
		if(l==1)
			cout << dp1[r-1] << endl;
		else
		cout << dp1[r-1]-dp1[l-2] << endl;
	}

}

return 0;
}

