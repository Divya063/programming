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
	float b;
	int p, f;
	cin >> b>> p >> f;
	ll h, c;
	cin >> h >> c;
	ll left = (b/2);
	ll ans =0;
	ll min1;
	min1 = min(p, f);
	if(b ==1){
		cout << 0 << endl;
	}
	else{
		if(h==c){
			if(p>=f){
				if(left>p)
					left = left -p;
				ans+=(p*h);
				}
			}
		}
	}

	cout << ans << endl;
	}
	

return 0;
}

