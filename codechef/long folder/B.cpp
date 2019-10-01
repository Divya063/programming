#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll logcal(ll num, ll base){
	cout << (long long)(log(num)/log(base));
	return (long long)(log(num)/log(base));
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){
	ll a, b;
	cin >> a >> b;
	ll num;
	if(b!=0)
	 num = a/b;
	if(b==1){
		cout << "NO" << endl;
	}
	else if(num == b){
		cout << "NO" << endl;
	}
	else if(logcal(num, b)==b){
		cout << "NO" << endl;
	}
	else if(num!=b){
		cout << "YES" << endl;
	}

}
return 0;
}

