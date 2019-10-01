#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll n, ans, sum;


void solve(ll arr[], int ptr, int sum){

	if(ptr>=n){
		if(sum==360||sum%360==0){
			//cout << sum;
			ans=1;
		}
		return;
	}
	
	solve(arr, ptr+1, sum+arr[ptr]);
	solve(arr, ptr+1, sum-arr[ptr]);

}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

cin >> n;
ll arr[n];
for(int i=0;i<n;i++){

	cin >> arr[i];
}

solve(arr, 0, 0);
if(ans==1)
	cout << "YES" << endl;
else
	cout << "NO" << endl;

return 0;
}

