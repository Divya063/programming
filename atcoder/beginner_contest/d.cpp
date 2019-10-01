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

ll n, m;
cin >> n >> m;
ll arr[n];
for(ll i=0; i<n; i++){
	cin >> arr[i];
}
sort(arr, arr+n);
for(int i=0; i<m ; i++){
	ll q1, q2;
	cin >> q1 >> q2;
	sort(arr, arr+n);
	if(arr[0]<q2){
		ll count=0;
		for(int i=0; i<q1; i++){
			if(arr[i]<q2){
				arr[i]=q2;
			}
		}
	}
}

ll sum=0;
for(int i=0; i<n; i++){
	sum+=arr[i];
}
cout << sum << endl;
return 0;
}

