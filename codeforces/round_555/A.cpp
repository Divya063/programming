#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll reachable(ll n){
	n+=1;
	while(n%10==0){
		n/=10;
	}
	return n;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll t;
cin >> t;
set<ll> map1;
while(!map1.count(t)){
	map1.insert(t);
	t=reachable(t);
}
cout << map1.size();
return 0;
}

