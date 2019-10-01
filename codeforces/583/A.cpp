#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll n, e, d;

ll search(vector<ll> &dollar, vector<ll> &euro){
	ll cost1 = n/e;
	auto ans = lower_bound(dollar.begin(), dollar.end(), cost1);
	auto ans1 = ans - dollar.begin();
	cout << ans1 << endl; 
	ll ans2=0;
	if(dollar[ans1]== cost1)
		 ans2 = (n-(dollar[ans1-1]*e));
	cout << ans2 << endl;
	ll cost2 = ans2/d;
	cout << cost2 << endl;
	auto ans3 = lower_bound(euro.begin(), euro.end(), cost2);

	ll ans4 = ans3 - euro.begin();
	if(euro[ans4]==cost2)
		ans2 = n-(ans2-(euro[ans4-1]*d));
	cout << ans2;

	return ans2;


}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n >> e >> d;
vector<ll> dollar = {1,2,5,10, 20, 50, 100};
vector<ll> euro = {5, 10, 20, 50, 100, 200};
ll ans1 = search(dollar, euro);

return 0;
}

