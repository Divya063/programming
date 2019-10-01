#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll m;
bool comparator(ll a, ll b){
	return a%m < b%m;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n >> m;
ll arr[n+1];
for(int i =0; i<n; i++){
	cin >> arr[i];
}


stable_sort(arr, arr+n, comparator);

for(int i =0; i<n; i++){
	cout << arr[i] << " ";
}

return 0;
}

