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
	 int pos[1000001]={0};
     int neg[1000001]={0};
	for(int i =0; i<num; i++){
		ll x;
		cin >> x;
		if(x<0){
			neg[-x]++;
		}
		else
			pos[x]++;
	}
	ll ans = 0;
	for(int i =0; i<=1000000; i++){
		if(pos[i]>0)
			ans+=(pos[i]*(pos[i]+1))/2;
		if(neg[i]>0)
			ans+=(neg[i]*(neg[i]+1))/2;
	}

	cout << ans << endl;

}
return 0;
}

