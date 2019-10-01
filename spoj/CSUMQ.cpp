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
ll arr[n];
for(int i=0;i<n;i++){

	cin >> arr[i];
}

ll prefsum[n];
prefsum[0]=arr[0];

for(int k=1; k<n;k++){

	prefsum[k]=prefsum[k-1]+arr[k];
}

ll q;
cin >> q;
for(int k=0;k<q;k++){

	ll l,r;
	cin >> l >> r;
	if(l==r){
		cout << arr[r] << endl;
	}
	else if(l==0){
		cout << prefsum[r] << endl;
	}
	else
		cout << prefsum[r]-prefsum[l-1] << endl;
}

return 0;

}

