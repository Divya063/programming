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
	ll num, q;
	cin >> num >> q;
	ll arr[num];
	for(int i =0; i<num; i++){
		cin >> arr[i];
	}
	for(int i =0; i<q; i++){
		ll x;
		ll count =0;
		cin >> x;
		for(int i =0; i<num; i++){
			if(x>arr[i]){
				count++;
				x=(2*(x-arr[i]));
			}
		}

		cout << count << endl;
	}
}
return 0;
}

