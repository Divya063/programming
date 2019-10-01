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
	ll n, m;
	cin >> n >> m;
	ll price[n][m];
	for(int i =0; i<n; i++){
		for(int j =0; j<m; j++){
			cin >> price[i][j];
		}
	}
	ll discount[n][m];
	for(int i =0; i<n; i++){
		for(int j =0; j<m; j++){
			cin >> discount[i][j];
		}
	}

	for(int i =0; i<n; i++){
		ll ans = -1;
		for(int j =0; j<m; j++){
			if(price[i][j]>=discount[i][j]){
				ans = discount[i][j]-price[i][j];
			}
			if(discount[])
		}
	}
}
return 0;
}

