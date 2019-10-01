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
int n, m;
cin >> n >> m;
vector<pair<ll, ll>> p;

for(int i =0; i<n; i++){
	ll a, b;
	cin >> a >> b;
	p.push_back({b, a});
}
sort(p.begin(), p.end(), greater<>());
ll sum =0;
ll rem_days = m;
for(auto i:p){
	if(i.second<=m && i.second<=rem_days){
		sum+=i.first;
		rem_days--;
	}
}
cout << sum << endl;
}

