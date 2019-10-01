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
	ll num;
	cin >> num;
	ll arr[num];
	vector<ll> count(num+1);
	for(ll i=0; i<num; i++){
		cin >> arr[i];
		++count[arr[i]];
	}
	sort(count.rbegin(), count.rend());
	ll ans = count[0];
	ll last = count[0];

	for(int i=1; i<count.size(); i++){

		if (last == 0) break;

		if(count[i]>=last){
			ans+= last-1;
			last = last-1;
		}

		else if( count[i]<last){
			ans+= count[i];
			last = count[i];
		}
	}

	cout << ans << endl;

}
	
return 0;
}
