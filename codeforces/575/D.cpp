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
ll t;
cin >> t;
map<char, char> map;
map['R'] = 'G';
map['G'] = 'B';
map['B'] = 'R';
while(t--){
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll ans = INT_MAX;
	for(int i =0; i<=n-k; i++){
		string str = s;
		ll count = 0;
		for(int j = 1; j<k; j++){
			if(str[i+j] != map[str[i+j-1]]){
				str[i+j] = map[str[i+j-1]];
				count++;
			}
			
		}
		ans = min(ans, count);
	}

	cout << ans << endl;


}
return 0;
}

