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
vector<pair<ll, ll>> v(n);
for( auto &i : v){
	cin >> i.second >> i.first;
}
for( auto i : v){
	cout << i.second << " " << i.first;
}
sort(v.begin(), v.end());
ll count =0;
for(auto i : v){
	if(i.second + count> i.first){
		cout << "No";
		return 0;
	}
	count+=i.second;
}
cout << "Yes";
return 0;
}

