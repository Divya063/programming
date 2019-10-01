#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll forbid[N];
ll check(ll k){
	while(k){
		ll rem= k%10;
		if(forbid[rem])
			return 0;
		k/=10;
	}
	return 1;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll k, n;
cin >> k >> n;
for(int i=0; i<n ;i++){
	ll num;
	cin >> num;
	forbid[num]=1;
}
for(int i=k;;i++){
	if(check(i)){
		cout << i;
		break;
	}
}

}

