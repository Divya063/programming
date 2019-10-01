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
ll n ;
cin >> n;
ll arr[n];
ll count=0;
for(ll i=0;i<n;i++){
	cin >> arr[i];
}

for(ll i=0;i<n;i++){

	ll xorsum = arr[i];

	for(ll j=i+1; j<n; j++){

		xorsum=xorsum ^arr[j];
		//cout << xorsum << " ";

		if(xorsum!=0)
			count++;
	}
}
if(count ==0)
	cout << "-1";
else
	cout << count;
return 0;
}

