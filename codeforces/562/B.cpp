#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

const int MAX=3e5;
pair<int, int> arr[MAX];
int arr1[MAX];
ll n, m;

bool solve(ll x){
	ll count=0;
	memset(arr1, 0, sizeof(arr1));
	for(int i=1; i<=m; i++){
		if(arr[i].first!=x && arr[i].second!=x){
			arr1[arr[i].first]++;
			arr1[arr[i].second]++;
			count++;
		}
	}
	for(int i=1; i<=n; i++){
		if(arr1[i]==count)
			return true;
	}
	return false;

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n >> m;
for(ll i=1; i<=m; i++){
	cin >> arr[i].first >> arr[i].second;
}
bool ans= solve(arr[1].first)||solve(arr[1].second);
if(ans){
	cout << "YES";
}
else{
	cout << "NO";
}
return 0;
}

