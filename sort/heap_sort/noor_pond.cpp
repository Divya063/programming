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
	vector<pair<int, int>> v(num);
	for(int i =0; i<num; i++){
		cin >> v[i].second >> v[i].first;
	}

	sort(v.begin(), v.end());

	priority_queue<ll> pq;
	ll ans = 0;
	for(int i =0; i<num; i++){
		pq.push(-v[i].second);
		while(-pq.top()<=v[i].first){
			pq.pop();
		}

		ans = max(ans, (long long)pq.size());

	}

	cout << ans << endl;


}
return 0;
}

