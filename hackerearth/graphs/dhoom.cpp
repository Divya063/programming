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
ll key, value;
cin >> key >> value;
ll n;
cin >> n;
ll flag[N];
ll arr[n];
memset(flag, -1, sizeof(flag));
for(ll i=0; i<n; i++){
	cin >> arr[i];
}

flag[key]=0;
queue<ll>q;
q.push(key);
while(!q.empty()){
	ll ans =q.front();
	q.pop();
	if(ans==value)
		break;
	for(ll i=0;i<n;i++){
		ll v = ans*arr[i];
		v=v%100000;
		if(flag[v]==-1){
			flag[v]=flag[ans]+1;
			q.push(v);
		}
	}
}
cout << flag[value];
return 0;
}

